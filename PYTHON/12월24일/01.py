from random import *

num = randint(1, 100)
count = 0
while True:
    input_num = input("입력 : ")
    count += 1
    if num > int(input_num):
        print("입력한 값보다 큼")
        continue
    if num < int(input_num):
        print("입력한 값보다 작음")
        continue
    if num == int(input_num):
        print("정답!!! 총 검색한 횟수 : " + str(count))
        break