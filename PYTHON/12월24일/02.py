from random import *

# 가위 바위 보 => 0 1 2
rsp = ['가위', '바위', '보']
for i in range(5):
    computer = randint(0,2)
    user = input()
    if computer - int(user) == -1 or computer - int(user) == 2:
        print("이겼습니다!")
    elif computer == int(user):
        print("비겼습니다!")
    else:
        print("졌습니다!")
    print(rsp[computer] + "  " + rsp[int(user)])