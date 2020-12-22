num = input("숫자를 입력하시오 : ")
num = int(num)
snum = [0,0,0]
wnum = ['영', '일', '이', '삼', '사', '오', '육', '칠', '팔', '구']
str = ""
if num > 99:
    snum[0] = num // 100
    num %= 100
    snum[1] = num // 10
    num %= 10
    snum[2] = num

elif num > 9:
    snum[1] = num // 10
    num %= 10
    snum[2] = num

else:
    snum[2] = num

for x in range(0, 3):
    if snum[x] != 0 and x != 2:
        if x == 0:
            str += wnum[snum[x]] + "백 "
        elif x == 1:
            str += wnum[snum[x]] + "십 "
        elif x == 2:
            str += wnum[snum[x]]
    else:
        str += wnum[snum[x]]
print(str)