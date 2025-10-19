import React,{useState,useEffect} from 'react'


function Typing(props) {
  let msg=props.msg;
  let [msg1, setMsg1] = useState("");
  
  const sizeClasses = {
    sm: "text-sm",
    md: "text-xl",
    lg: "text-3xl",
    xl: "text-4xl",
    "2xl": "text-2xl",
    "3xl": "text-3xl",
    "4xl": "text-7xl"
  };
  useEffect(()=>{
    let i = 0;

    let typing = () => {
      if (i < msg.length) {
        setMsg1(msg1+=msg.charAt(i)); 
        i++;
      } else {
        clearInterval(timer);
      }
    };

    let timer = setInterval(typing, 200); 
    return () => clearInterval(timer); 
  }, []);

  return (
    <div>
      <p className={`Type1 font-mono  flex flex-col font-bold text-fuchsia-900
      justify-center items-center ${
          sizeClasses[props.size] || "text-base"}`}
      style={{fontFamily:props.font1}}>{msg1}</p>
    </div>
  )
}

export default Typing
