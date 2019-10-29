# 3. 두 수를 입력 받아서 두 수가 모두 짝수이면 “모두 짝수”를
#    출력하고, 모두 홀수이면 “모두 홀수”를 출력하는 프로그램

a=int(input("input : "))
b=int(input("input : "))

if a%2==0 and b%2==0:
    print("모두 짝수")
if a%2==1 and b%2==1:
    print("모두 홀수")
    
