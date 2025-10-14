const btn=document.querySelector("#btn");//get access of button

function bt()//function for check condditin
{
  let text1=document.querySelector("#t1");//get access of Name field
  let pas=document.querySelector("#ps");//get access of Password field
  //generate random no
  const randIdx = Math.floor(Math.random() * 100);
  const randIdx1 = Math.floor(Math.random() * 100);
  const randIdx2 = Math.floor(Math.random() * 100);
  if(text1.value=="" || pas.value=="")//check condition
  {
    let a=`${randIdx}em`;//value for btn possition
    let b=`${randIdx1}em`;
    btn.style.marginLeft=a;//change possition
    btn.style.marginTop=b;
    btn.setAttribute("disabled","true");//disabled click attribute of button
  }
  else
  {
    //if condition become false and user fill the field than btn attribute change to these
    btn.style.color="green";
    btn.style.margin="10%";
    btn.style.marginTop="383px";
    btn.style.zIndex="5";
    btn.setAttribute("disabled","false");
  }
}
