let amount = document.querySelector(".text");
let fromFlag = document.querySelector(".from_flag");
let flagUrl = "https://flagsapi.com/us/flat/64.png";
let fromSelect = document.querySelector("#from1");
let sel1 = document.getElementsByClassName("op");

//flagchange
fromFlag.src = "https://flagsapi.com/IN/flat/64.png";
function chgFlag() {
  for (let j=0; j<2; j++) {
    for (let i in countryLists) {
      let options = document.createElement("option");
      options.innerText = i;
      options.value = i;
      sel1[j].appendChild(options);
    }
  }
  sel1[0].addEventListener("change",(evt)=>{
    console.log(evt.target);
  });
}
chgFlag();
