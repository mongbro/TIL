function op(){
    var a = document.getElementById('a').value
    var b = document.getElementById('b').value
    var op = document.getElementById('op').value
    var result;
    if (a == "" || b == "")
        result = '값을 입력하세요.'
    else if (typeof(parseInt(a)) == 'number' && typeof(parseInt(b)) == 'number'){
        switch (op){
            case '+':
                result = sum(a, b);
                break;
            case '-':
                result = diff(a, b);
                break;
            case '*':
                result = mul(a, b);
                break;
            case  '/':
                if( b == 0){
                    result = '0으로 나눌 수 없음'
                }
                else{
                    result = div(a, b);
                    break;
                }
            case '%':
                    if( b == 0){
                        result = '0으로 나눌 수 없음'
                    }
                    else{
                        result = mod(a, b);
                        break;
                    }
        }
    }
    else
        result = 'NaN'
    document.getElementById('result').value = result;
}

function sum(a, b){
    return parseInt(a) + parseInt(b);
}

function diff(a, b){
    return parseInt(a) - parseInt(b);
}

function mul(a, b){
    return parseInt(a) * parseInt(b);
}

function div(a, b){
    return parseInt(a) / parseInt(b);
}

function mod(a, b){
    return parseInt(a) % parseInt(b);
}