original = input("계좌번호를 입력하시오 : ")
change = ""

for c in original:
    if c.isdigit():
        change += c

print(change)