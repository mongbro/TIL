function even_odd(){
    var result;
    if(parseInt(document.getElementById('even_odd_num').value) % 2 == 0)
        result = '짝수입니다.'
    else
        result = '홀수입니다.'
    document.getElementById('even_odd_result').innerHTML = result;   
}




function is_prime(){
    var result;
    var num = parseInt(document.getElementById('is_prime_num').value);
    var pri = 0;
    for(var i=1;i<num;i++){
        if(num%i==0)
            pri++;
    }
    if (pri==1)
        result='소수입니다.'
    else
        result='소수가 아닙니다.'
    document.getElementById('is_prime_result').innerHTML = result;
}

function gcd(){
    var a = parseInt(document.getElementById('gcd_a').value)
    var b = parseInt(document.getElementById('gcd_b').value)
    var tmp, result;
    var A = a, B = b;
    if (a < b){
        while(b != 0){
            tmp = a % b;
            a = b;
            b = tmp;
        }
        result = a;
    }
    else{
        while(a != 0){
            tmp = b % a;
            b = a;
            a = tmp;
        }
        result = b;
    }
    document.getElementById('gcd_result').innerHTML = A + '과' + B + '의 최대공약수는 ' + result;
}