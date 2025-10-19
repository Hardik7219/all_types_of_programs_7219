import React, { useState } from 'react'
import './All.css'


function Button({fun,label}) {
    let [frame,setFrame]=useState('First');
    
    function change(){
        if(frame==='First'){
            fun('Second');
        }
    }   
    function SEND(){
        let msg=prompt("Enter your message:");
        const phone = "+919737395814";
        const message = msg;
        const url = `https://api.whatsapp.com/send?phone=${phone}&text=${encodeURIComponent(
        message
        )}`;
        window.open(url, "_blank");
    }
    return (
        <>
            <div className='flex justify-center items-center'>
            <button id="btn" onClick={label=='CLICK' ? change : SEND} className='h-15 w-50 rounded-2xl bg-blue-500
            text-2xl text-amber-50'>{label}</button>
            </div>
            
        </>
    )
}

export default Button
