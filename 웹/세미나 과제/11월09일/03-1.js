var a=prompt("a입력");
var b=prompt("b입력");
var tmp;
var A=a, B=b;
if(a<b){
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    document.write(A+"과 "+B+"의 최대공약수는 "+a);
}
else{
    while(a!=0){
        tmp=b%a;
        b=a;
        a=tmp;
    }
    document.write(A+"과 "+B+"의 최대공약수는 "+b);
}