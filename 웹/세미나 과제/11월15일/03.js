function operate(){
    var a = (document.getElementById('a').value)
    var b = (document.getElementById('b').value)
    var op = document.getElementById('op').value
    var result
    if (a == "" || b == "")
        result = '값을 입력하세요.'
    else if (typeof(parseInt(a)) != "number" || typeof(parseInt(b)) != "number")
        result = 'NaN'
    else if (op=='sum')
        result = sum(a, b);
    else if (op=='diff')
        result = diff(a, b);
    else if (op=='mul')
        result = mul(a, b);
    else if (op=='div'){
        if (b == 0)
            result = '0으로 나눌 수 없음'
        else
            result = div(a, b);        
    }
    else if (op=='mod'){
        if (b == 0)
            result = '0으로 나눌 수 없음'
        else
            result = mod(a, b);
    }
    document.getElementById('result_a').value = result;
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