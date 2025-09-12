let h2=document.querySelector("h2");
console.dir(h2.innerText);
h2.innerText= h2.innerText +" from apna collage";

let box1 =document.querySelectorAll(".box");
console.dir(box1);
let ind=0;
for(let i of box1){
  // Tab to edit

 box1[ind].innerText="abs"+ind;
 ind++;

}