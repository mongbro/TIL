# 9. 1에서 50사이의 랜덤 숫자를 20개 발생시켜서 mylist에
#    저장한 후, mylist를 읽어서 만일 홀수이면 list1에 저장하고,
#    만일 짝수이면 list2에 저장하는 프로그램

import random

mylist=[]
list1=[]
list2=[]
for i in range(1, 21, 1):
    a=random.randrange(1, 21)
    mylist.append(a)
    if a%2==1:
        list1.append(a)
    else:
        list2.append(a)

print(mylist)
print(list1)
print(list2)
