# 7. 1에서 100사이의 정수 중에서 5의 배수가 
#    되는 모든 정수를 더하여 출력하는 프로그램

import random

suma=0
for i in range(5, 101, 5):
    suma+=i

print(suma)
