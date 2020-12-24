num = input("어디까지 더할까요 >> ")
num = int(num)
sum_num = 0
for i in range(1, num + 1):
    sum_num += i
print("모두 더한 수 : ", sum_num)