# 6. 1에서 50사이의 랜덤 숫자를 10개를 발생시키고, 이 중에서
#    7의 배수의 갯수가 몇 개 인지 출력하는 프로그램

import random

seven=0
for i in range(1, 11, 1):
    a=random.randrange(1, 51)
    if a%7==0:
        seven+=1
        print(a, "v")
    else:
        print(a)
print(seven)
