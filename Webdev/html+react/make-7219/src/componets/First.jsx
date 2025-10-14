import React, { useState, useEffect } from "react";
import "./All.css";
import Typing from "./Typing.jsx";

let msg = "HELLO COPYCAT";

function First() {
  return (
    <div className=" First border-2xlold bg-black  p-10 
    rounded-lg  shadow-lg h-60 w-100 flex justify-center items-center 
    flex-col gap-2">
      <div className="first pb-10"></div>
      <Typing msg={msg} />
    </div>
  );
}

export default First;
