# 10. 1에서 100사이의 랜덤 숫자를 10개 발생시켜서
#     mylist에 저장한 후, mylist를 읽어서 가장 큰 수를
#     출력하는 프로그램

import random

mylist=[]
maxi=0
for i in range(1, 11, 1):
    a=random.randrange(1, 101)
    mylist.append(a)
    if maxi<a:
        maxi=a
        print(a)

print(mylist)
print(maxi)
