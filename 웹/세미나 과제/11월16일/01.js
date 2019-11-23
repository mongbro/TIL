function even_odd(){
    var num = document.getElementById('even_odd').value
    var result
    if ( num % 2 == 0 )
        result = '짝수';
    else   
        result = '홀수';
    document.getElementById('even_odd_result').innerHTML = result;
}

function is_prime(){
    var num=document.getElementById('is_prime').value
    var result
    var count = 0
    for (var i = 1 ;  i < num ; i++ ){
        if (num % i == 0)
            count++;
    }
    if (count == 1)
        result = '소수임'
    else
        result = '소수가 아님'
    document.getElementById('is_prime_result').innerHTML = result;
}

function gcd(){
    var a = document.getElementById('gcd1').value;
    var b = document.getElementById('gcd2').value;
    var result, A = a, B = b, tmp;
    if (a < b){
        tmp = a;
        a = b;
        b = tmp;
    }
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    result = a
    document.getElementById('gcd_result').innerHTML = A + '와 ' + B + '의 GCD = ' + result;
}