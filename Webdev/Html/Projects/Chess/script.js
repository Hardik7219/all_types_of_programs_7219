const initialBoard = [
  ["BR", "BN", "BB", "BQ", "BK", "BB", "BN", "BR"],
  ["BP", "BP", "BP", "BP", "BP", "BP", "BP", "BP"],
  ["", "", "", "", "", "", "", ""],
  ["", "", "", "", "", "", "", ""],
  ["", "", "", "", "", "", "", ""],
  ["", "", "", "", "", "", "", ""],
  ["WP", "WP", "WP", "WP", "WP", "WP", "WP", "WP"],
  ["WR", "WN", "WB", "WQ", "WK", "WB", "WN", "WR"],
];

const pieceSymbols = {
  WP: "♙", BP: "♟",
  WR: "♖", BR: "♜",
  WN: "♘", BN: "♞",
  WB: "♗", BB: "♝",
  WQ: "♕", BQ: "♛",
  WK: "♔", BK: "♚",
};

let board = JSON.parse(JSON.stringify(initialBoard));
let currentPlayer = "W"; // White starts
let selectedPiece = null;
let selectedSquare = null;
const chessboard = document.getElementById("chessboard");

// Render the chessboard
function renderBoard() {
  chessboard.innerHTML = "";
  for (let row = 0; row < 8; row++) {
    for (let col = 0; col < 8; col++) {
      const square = document.createElement("div");
      square.classList.add("square", (row + col) % 2 === 0 ? "bg-gray-200" : "bg-gray-600");
      square.dataset.row = row;
      square.dataset.col = col;

      const piece = board[row][col];
      if (piece) {
        const pieceElement = document.createElement("div");
        pieceElement.textContent = pieceSymbols[piece];
        pieceElement.classList.add("piece", "text-3xl");
        pieceElement.dataset.piece = piece;
        pieceElement.dataset.row = row;
        pieceElement.dataset.col = col;
        square.appendChild(pieceElement);
      }

      chessboard.appendChild(square);
    }
  }
}

// Check for promotion and handle it
function checkPawnPromotion(row, col) {
  const piece = board[row][col];

  // Check if the piece is a pawn and on the promotion rank
  if (piece[1] === "P" && ((piece[0] === "W" && row === 0) || (piece[0] === "B" && row === 7))) {
    // Prompt the player to choose a piece
    const promotionChoice = prompt(
      "Promote your pawn! Enter Q for Queen, R for Rook, B for Bishop, or N for Knight:"
    );

    const validChoices = ["Q", "R", "B", "N"];
    if (validChoices.includes(promotionChoice)) {
      // Replace the pawn with the chosen piece
      board[row][col] = piece[0] + promotionChoice;
      renderBoard();
    } else {
      alert("Invalid choice. Promoting to a Queen by default.");
      board[row][col] = piece[0] + "Q"; // Default to Queen
      renderBoard();
    }
  }
}

// Get valid moves for a piece
function getValidMoves(piece, row, col) {
  const moves = [];
  const direction = piece[0] === "W" ? -1 : 1;

  switch (piece[1]) {
    case "P":
      // Pawn move: 1 square forward if the square is empty
      if (board[row + direction]?.[col] === "") moves.push([row + direction, col]);

      // Pawn move: 2 squares forward from starting position
      if ((piece[0] === "W" && row === 6) || (piece[0] === "B" && row === 1)) {
        if (board[row + direction * 2]?.[col] === "" && board[row + direction]?.[col] === "") {
          moves.push([row + direction * 2, col]);
        }
      }

      // Pawn capture: diagonally left
      if (board[row + direction]?.[col - 1]?.[0] === (piece[0] === "W" ? "B" : "W")) {
        moves.push([row + direction, col - 1]);
      }

      // Pawn capture: diagonally right
      if (board[row + direction]?.[col + 1]?.[0] === (piece[0] === "W" ? "B" : "W")) {
        moves.push([row + direction, col + 1]);
      }
      break;

    case "N":
      // Knight move
      const knightMoves = [
        [row - 2, col - 1], [row - 2, col + 1],
        [row - 1, col - 2], [row - 1, col + 2],
        [row + 1, col - 2], [row + 1, col + 2],
        [row + 2, col - 1], [row + 2, col + 1]
      ];
      knightMoves.forEach(([r, c]) => {
        if (r >= 0 && r < 8 && c >= 0 && c < 8 && (board[r][c] === "" || board[r][c][0] !== piece[0])) {
          moves.push([r, c]);
        }
      });
      break;

    case "R":
    case "Q":
    case "B":
      // Rook, Queen, and Bishop move logic (using directions for all)
      const directions = {
        R: [[-1, 0], [1, 0], [0, -1], [0, 1]],
        Q: [[-1, 0], [1, 0], [0, -1], [0, 1], [-1, -1], [-1, 1], [1, -1], [1, 1]],
        B: [[-1, -1], [-1, 1], [1, -1], [1, 1]]
      };
      const dirs = directions[piece[1]];

      dirs.forEach(([dr, dc]) => {
        for (let i = 1; i < 8; i++) {
          const r = row + dr * i;
          const c = col + dc * i;
          if (r >= 0 && r < 8 && c >= 0 && c < 8) {
            if (board[r][c] === "") {
              moves.push([r, c]);
            } else if (board[r][c][0] !== piece[0]) {
              moves.push([r, c]);
              break;
            } else {
              break;
            }
          }
        }
      });
      break;

    case "K":
      // King move
      const kingMoves = [
        [-1, -1], [-1, 0], [-1, 1],
        [0, -1], [0, 1],
        [1, -1], [1, 0], [1, 1]
      ];
      kingMoves.forEach(([dr, dc]) => {
        const r = row + dr;
        const c = col + dc;
        if (r >= 0 && r < 8 && c >= 0 && c < 8 && (board[r][c] === "" || board[r][c][0] !== piece[0])) {
          moves.push([r, c]);
        }
      });
      break;
  }

  return moves;
}

// Handle click on square
chessboard.addEventListener("click", (e) => {
  const target = e.target;

  if (!target.classList.contains("square")) return;

  const row = parseInt(target.dataset.row);
  const col = parseInt(target.dataset.col);
  const piece = board[row][col];

  if (selectedPiece) {
    const validMoves = getValidMoves(selectedPiece.piece, selectedPiece.row, selectedPiece.col);
    const isValidMove = validMoves.some(([r, c]) => r === row && c === col);

    if (isValidMove) {
      // Move the piece
      board[row][col] = selectedPiece.piece;
      board[selectedPiece.row][selectedPiece.col] = "";
      renderBoard();

      // Check for pawn promotion
      checkPawnPromotion(row, col);

      // Switch players
      currentPlayer = currentPlayer === "W" ? "B" : "W";
      selectedPiece = null;
      selectedSquare.classList.remove("border-4", "border-red-500");
    } else {
      selectedPiece = null;
      selectedSquare.classList.remove("border-4", "border-red-500");
    }
  } else {
    if (piece && piece[0] === currentPlayer) {
      selectedPiece = { piece, row, col };
      selectedSquare = target;
      selectedSquare.classList.add("border-4", "border-red-500");
    }
  }
});

// Initial render
renderBoard();