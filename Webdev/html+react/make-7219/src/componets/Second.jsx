import React from 'react'
import Typing from './Typing'
import "./All.css";

function Second() {
    return (
        <div className='Second bg-blue-200 border-2xlold border-black p-10 rounded-lg bg- shadow-lg h-90 w-100 flex justify-center items-center flex-col gap-10'>
            <div className='second'></div>
            <div><Typing msg="I WANT TO TELL YOU SOMETHING" /></div>
        </div>
    )
}

export default Second
