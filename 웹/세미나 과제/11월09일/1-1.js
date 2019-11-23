var n = prompt("정수 입력 : ");
var i = 1;
var count = 0;
for ( ; i <= n ; i++ ){
    if (n % i == 0)
    count += 1;
}
if (count == 2)
    alert("소수입니다.");
else
    alert("소수가 아닙니다.")