let text=document.querySelector("#text1");
let sound= new Audio("./Click 05_1.mp3")
sound.currentSec=0.00000000001;
text.addEventListener("blur",()=>{
  text1=text.value;
});

 function btn(btn)
 {
   text.value+=btn;
   sound.play();
 }
 function clearScreen()
 {
   sound.play();
   text.value="";
 }
 function result()
 {
   sound.play();
   try {
     text.value=eval(text.value);
   }
     catch (e) {
       clearScreen();
     }
   
 }
 function remove() {
   sound.play();
   let str=text.value.slice(0,-1);
   text.value=str;
 }