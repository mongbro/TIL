s = input("문자열을 입력 >> ")
alpha = 0
num = 0
blink = 0

for c in s:
    if c.isalpha():
        alpha += 1
    if c.isdigit():
        num += 1
    if c.isspace():
        blink += 1

print("알파벳 문자의 개수 : ", alpha)
print("숫자 문자의 개수 : ", num)
print("공백 문자의 개수 : ", blink)