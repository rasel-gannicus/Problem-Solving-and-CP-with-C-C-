

let a=500000000000, b=500000000000, k=1000000000000;
if(k<=a){
    a = a-k;
}else if(k>=a+b){
    a = 0;
    b = 0;
}else{
    b = (a+b) - k;
    a = 0;
}
console.log(a,b);