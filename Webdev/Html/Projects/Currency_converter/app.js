let amount = document.querySelector(".text");
let fromFlag = document.querySelector(".from_flag");
let fromSelect = document.querySelector("#from1");
let sel1 = document.getElementsByClassName("op");
let toFlag = document.querySelector(".to_flag");
let rate = document.querySelector(".text");
let btn = document.querySelector("#btn");
let msg = document.querySelector("#msg");
//flagchange
let TO = "INR";
let FROM = "USD";
function chgFlag() {
  for (let j = 0; j < 2; j++) {
    for (let i in countryLists) {
      let options = document.createElement("option");
      options.innerText = i;
      options.value = i;
      sel1[j].appendChild(options);
    }
  }
  sel1[0].addEventListener("change", (evt) => {
    fromFlagChange(evt.target);
  });
  sel1[1].addEventListener("change", (evt) => {
    toFlagChange(evt.target);
  });
}
chgFlag();

const fromFlagChange = (ele) => {
  let flag = ele.value;
  FROM = ele.value;
  fromFlag.src = `https://flagsapi.com/${countryLists[flag]}/flat/64.png`;
};
const toFlagChange = (ele) => {
  let flag = ele.value;
  TO = ele.value;
  toFlag.src = `https://flagsapi.com/${countryLists[flag]}/flat/64.png`;
};

console.log(FROM, TO, rate.value);

var myHeaders = new Headers();
myHeaders.append("apikey", "yRZWhBV5RxvtE42SRorN4wG3ydIzZzj0");

var requestOptions = {
  method: "GET",
  redirect: "follow",
  headers: myHeaders,
};
let result1  = () => {
  let exhchange = `https://api.apilayer.com/exchangerates_data/convert?to=${TO}&from=${FROM}&amount=${rate.value}`;
  fetch(exhchange, requestOptions)
    .then((response) => response.text())
    .then((result) => console.log(result))
    .catch((error) => console.log("error", error));
  // msg.innerText =`FROM ${FROM} AMOUNT=${rate.value} TO ${TO} RATE IS = ${requestOptions.query}`
  // console.log();
};
btn.addEventListener("click", result1);
