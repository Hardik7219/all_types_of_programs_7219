import React ,{useEffect,useState} from "react";
import Typing from "./Typing";
let nick = "";
let myMsg =
  "Oyy copy cat 😿 .. mane mafi magvi che gaya week mate 😣mara lithe tu bov radi and hurt thay che 😿.. please diku mane mafi api sake to maf Kari kadje ne 😥... Sorry darling 🤌🏻🌷🌸 please please maf Kari deje ne 🫶🏻💞";
function Main() {
  function sendMessage() {
    const phone = "+919737395814";
    const message = `IT'S OK ${nick}`;
    const url = `https://api.whatsapp.com/send?phone=${phone}&text=${encodeURIComponent(
      message
    )}`;
    window.open(url, "_blank");
  }
  function sendMessage1() {
    const phone = "+918511776600";
    const message = `NO ${nick}`;
    const url = `https://api.whatsapp.com/send?phone=${phone}&text=${encodeURIComponent(
      message
    )}`;
    window.open(url, "_blank");
  }

  const [nick, setNick] = useState("");

  return (
    <>
      <div className=" h-dvh w-full flex flex-col justify-center items-center">
        <div className="mm">
          <span className="w-30 h-auto wrap-anywhere p-20 pr-6 pl-6 m-1">
            <Typing msg={myMsg} />
          </span>
        </div>
        <div className="Main bg-pink-300 p-10 rounded-lg shadow-lg h-40 w-100 flex justify-center items-center flex-col gap-2">
          <input
            type="text"
            placeholder="Enter nickname (compulsory)"
            value={nick}
            onChange={(e) => setNick(e.target.value)}
            className="border p-2 rounded "
          />
          <button
            disabled={!nick.trim()} 
            onClick={sendMessage}
            className="rounded-2xl hover:cursor-pointer hover:scale-110 hover:bg-blue-300  transition-discrete text-white p-2 bg-purple-500"
          >
            💬 Send Message "MAF KIYA"
          </button>
          <button
            disabled={!nick.trim()} 
            onClick={sendMessage1}
            className="rounded-2xl hover:cursor-pointer hover:scale-110 hover:bg-blue-300  transition-discrete text-white p-2 bg-red-800"
          >
            💬 Send Message "NAHI"
          </button>
          <audio src="https://res.cloudinary.com/dashznu2p/video/upload/v1760289898/Samjho_Na_X_Wishes_-_Mashup___Aditya_Rikhari___Hasan_Raheem___DJ_Sumit_Rajwanshi_sl78by.mp4" autoPlay loop hidden />

          
        </div>
      </div>
    </>
  );
}

export default Main;
