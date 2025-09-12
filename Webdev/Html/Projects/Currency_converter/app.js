

let amount= document.querySelector(".text");
let fromFlag=document.querySelector(".from_flag");
let flagUrl="https://flagsapi.com/us/flat/64.png";
let fromSelect=document.querySelector("#from1");
//flagchange
fromFlag.src="https://flagsapi.com/IN/flat/64.png";
function chgFlag()
{
    for(let i in countryLists)
    {
        console.log(i)
        let option=document.createElement("option");
        option.value=i;
        fromSelect.appendChild(option);
    }
}
chgFlag();


















//exchange api
// var myHeaders = new Headers();
// myHeaders.append("apikey", "yRZWhBV5RxvtE42SRorN4wG3ydIzZzj0");

// var requestOptions = {
//   method: 'GET',
//   redirect: 'follow',
//   headers: myHeaders
// };

// fetch("https://api.apilayer.com/exchangerates_data/convert?to={ind}&from={usd}&amount={100}", requestOptions)
//   .then(response => response.text())
//   .then(result => console.log(result))
//   .catch(error => console.log('error', error));
