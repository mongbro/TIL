num=input("16진수 한글자 입력 : ")

if int(num)>=0 and int(num)<=9 or num>='a' and num<='f' or num>='A' and num<='F':
    print("10진수 ==> ", int(num, 16))
else:
    print("16진수가 아닙니다.")
