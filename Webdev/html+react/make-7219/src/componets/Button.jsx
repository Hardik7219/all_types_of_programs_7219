import React,{useState } from "react";
import './All.css'

function Button({fun}) {
    const [label, setLabel] = useState("HELLO COPYCAT");
    const [visible, setVisible] = useState(true);

  function handleClick() {
    setLabel(prev => (prev === "HELLO COPYCAT" ? "NEXT" : "HELLO"));
    fun(prev => (prev === "Second" ? "Main" : "Second"));

    if (label === "NEXT") {
 
      setVisible(false);
    } else {
      
      setLabel("NEXT");
    }
  }
  if (!visible) return null;
  

    return (
        <div>
        <button
            onClick={handleClick}
            className="btn relative inline-block h-20 w-40 text-2xl p-px font-semibold 
            leading-6 text-white bg-gray-800 shadow-2xl cursor-pointer rounded-xl
            shadow-zinc-900 transition-transform duration-300 ease-in-out hover:scale-105
            active:scale-95 dark:md:hover:bg-blue-800"
        >
        {label}
        </button>
        
    </div>
    );
}

export default Button;
