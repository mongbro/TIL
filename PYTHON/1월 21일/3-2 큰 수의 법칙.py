import math

n, m, k = map(int, input().split())
arr1 = list(map(int, input().split()))

arr2 = []
arr2 = arr1.copy()
arr2.remove(max(arr2))

sum = 0
count = 0

for i in range(m):
    if count == 3:
        sum += max(arr2)
        count = 0
    else:
        sum += max(arr1)
        count += 1

print(sum)