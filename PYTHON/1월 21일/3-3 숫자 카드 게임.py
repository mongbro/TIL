n, m = map(int, input().split())
result = 0
arr = []

for row in range(n):
    arr += [[0] * m]

for row in range(n):
    arr[row] = list(map(int, input().split()))

for row in range(n):
    if result < min(arr[row]):
        result = min(arr[row])

print(result)
