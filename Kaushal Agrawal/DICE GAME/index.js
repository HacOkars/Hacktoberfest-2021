var a= Math.random();
a= a*6;
var first = Math.floor(a)+1;
var so1= "images/dice"+first+".png";
var fin=document.querySelectorAll("img")[0];
fin.setAttribute("src",so1);

var b= Math.random();
b= b*6;
var second = Math.floor(b)+1;
var so2= "images/dice"+second+".png";
var fin2=document.querySelectorAll("img")[1];
fin2.setAttribute("src",so2);

if(first>second){
document.querySelectorAll("h1")[0].innerHTML="PLAYER 1 WINS";
}
else if(first<second){
  document.querySelectorAll("h1")[0].innerHTML="PLAYER 2 WINS";
}
else{
  document.querySelectorAll("h1")[0].innerHTML="TIES";
}
