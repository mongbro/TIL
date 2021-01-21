n, m, k = map(int, input().split())

arr = list(map(int, input().split()))

arr.sort()
first = arr[-1]
second = arr[-2]

sum = 0
count = 0

for i in range (m):
    if count <= 3:
        sum += first
        count += 1
    else:
        sum += second
        count = 0

print(sum)