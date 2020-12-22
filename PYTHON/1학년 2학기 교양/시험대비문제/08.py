# 8. while 문을 사용하여 1에서 50사이의 랜덤 숫자를 계속
#    발생시켜서 mylist에 저장하되, 만일 45보다 큰 수가 발생되면
#    while 문을 break 하여 벗어나서 mylist를 출력하는 프로그램

import random

mylist=[]
while 1:
    a=random.randrange(1, 51)
    mylist.append(a)
    if a>=45:
        break
print(mylist)
