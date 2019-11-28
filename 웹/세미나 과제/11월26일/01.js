function op() {
    var oper = {
        value1: document.getElementById('a').value,
        value2: document.getElementById('b').value,
        op: document.getElementById('op').value,
        sum: function sum(a, b) {
            return parseInt(a) + parseInt(b);
        },
        diff: function diff(a, b) {
            return parseInt(a) - parseInt(b);
        },
        mul: function mul(a, b) {
            return parseInt(a) * parseInt(b);
        },
        div: function div(a, b) {
            return parseInt(a) / parseInt(b);
        },
        mode: function mod(a, b) {
            return parseInt(a) % parseInt(b);
        }
    }
    var result;
    if (oper.value1 == "" || oper.value2 == "")
        result = '값을 입력하세요.'
    else if (typeof (parseInt(oper.value1)) == 'number' && typeof (parseInt(oper.value2)) == 'number') {
        switch (oper.op) {
            case '+':
                result = oper.sum(oper.value1, oper.value2);
                break;
            case '-':
                result = oper.diff(oper.value1, oper.value2);
                break;
            case '*':
                result = oper.mul(oper.value1, oper.value2);
                break;
            case '/':
                if (oper.value2 == 0) {
                    result = '0으로 나눌 수 없음'
                }
                else {
                    result = oper.div(oper.value1, oper.value2);
                    break;
                }
            case '%':
                if (oper.value2 == 0) {
                    result = '0으로 나눌 수 없음'
                }
                else {
                    result = oper.mod(oper.value1, oper.value2);
                    break;
                }
        }
    }
    else
        result = 'NaN'
    document.getElementById('result').value = result;
}