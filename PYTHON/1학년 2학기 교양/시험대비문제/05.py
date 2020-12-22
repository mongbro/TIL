# 5. 1에서 50사이의 랜덤 숫자를 10개를 발생시키고 홀수는 list1에
#    저장하고짝수는 list2에 저장한 후에 두 리스트를 출력하는 프로그램

import random

list1=[]
list2=[]

for i in range(1, 11, 1):
    a=random.randrange(1, 51)
    if a%2==1:
        list1.append(a)
    else:
        list2.append(a)
print(list1, "\n", list2)
