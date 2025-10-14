import { useState } from "react";
import "./App.css";
import First from "./componets/First.jsx";
import Second from "./componets/Second.jsx";
import Button from "./componets/Button.jsx";
import Main from "./componets/Main.jsx";

function App() {
  let [compo, setCompo] = useState("First");

  const components = {
    First: <First />,
    Second: <Second />,
    Main:<Main/>
  };
  return (
    <>
      <div className="flex justify-center items-center h-screen flex-col">
        {components[compo]}
        <Button fun={setCompo} lable={compo=='Second' ? 'NEXT' :'HELLO'}/>
      </div>
    </>
  );
}

export default App;
