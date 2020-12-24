from random import *

num = int(input("주사위 실험 반복횟수"))
dice = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for i in range (num):
    d1 = randint(1, 6)
    d2 = randint(1, 6)
    dice[d1 + d2] += 1
sum = 0
for i in range(2, 13):
    print(i, " : ", dice[i])
    sum += dice[i]
print("총 횟수 >> ", sum)