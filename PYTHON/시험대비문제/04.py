# 4. 두 정수를 입력 받아서 두 수의
#    사이의 모든 정수의 합을 출력하는 프로그램을 

a=int(input("input : "))
b=int(input("input : "))
suma=0

if a>b:
    maxi=a
    mini=b
else:
    maxi=b
    mini=a

for i in range(mini, maxi+1, 1):
    suma+=i
print(suma)
