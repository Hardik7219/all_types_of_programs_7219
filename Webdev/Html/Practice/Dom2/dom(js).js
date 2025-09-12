let btn = document.createElement("button");
btn.style.color="blue";
btn.innerText="button";

let body=document.querySelector("body");
body.prepend(btn);
// q2
let kp=document.querySelector("p");
btn.onclick= () => {
kp.classList.add("p");
}

