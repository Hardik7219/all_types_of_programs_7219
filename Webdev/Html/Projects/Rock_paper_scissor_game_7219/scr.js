//get html tags
let choice = document.querySelectorAll(".image");
let cmpScore = document.querySelector("#c-score");
let youScore = document.querySelector("#u-score");
let msg = document.querySelector("#msg");

choice.forEach((image) => {
  //get user choice
  image.addEventListener("click", () => {
    const u_select = image.getAttribute("id");
    playGame(u_select);
  });
});
function cmpSelect() {
  //get computer choice
  const cmp = ["rock", "paper", "scissors"];
  const cmpIndex = Math.floor(Math.random() * 3);
  return cmp[cmpIndex];
}
let cScore = 0; //computer score
let u_Score = 0; //user score
function winner(u_select, cmp_select) {
  //select winner
  if (
    (u_select == "rock" && cmp_select == "paper") ||
    (u_select == "scissors" && cmp_select == "rock") ||
    (u_select == "paper" && cmp_select == "scissors")
  ) {
    cScore++;
    msg.innerText = `cmp win by your ${u_select} and  cmp ${cmp_select}`;
    cmpScore.innerText = cScore;
  } else if (
    (u_select == "paper" && cmp_select == "rock") ||
    (u_select == "scissors" && cmp_select == "paper") ||
    (u_select == "rock" && cmp_select == "scissors")
  ) {
    u_Score++;
    msg.innerText = `You win! by your ${u_select} and cmp ${cmp_select}`;
    youScore.innerText = u_Score;
  }
}
function playGame(u_select) {
  //play game and draw game select
  const cmp_select = cmpSelect();

  winner(u_select, cmp_select);
  //winner dicede
  if (u_select == cmp_select) {
    msg.innerText = "Draw";
  }
}
