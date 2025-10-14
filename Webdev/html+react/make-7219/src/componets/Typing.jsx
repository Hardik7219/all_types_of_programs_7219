import React,{useState,useEffect} from 'react'
import './All.css'
function Typing(props) {
  let msg=props.msg;
  let [msg1, setMsg1] = useState("");

  console.log(msg);
  
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
      <p className='Type1 font-mono text-3xl flex flex-col font-bold text-fuchsia-900 justify-center items-center'>{msg1}</p>
    </div>
  )
}

export default Typing
