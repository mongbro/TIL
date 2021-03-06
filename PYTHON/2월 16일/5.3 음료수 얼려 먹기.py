n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

def dfs(x, y):
    if x >= n or x < 0 or y >= m or y < 0:
        return False
    if arr[x][y] == 0:
        arr[x][y] = 1
        dfs(x - 1, y)
        dfs(x + 1, y)
        dfs(x, y - 1)
        dfs(x, y + 1)
        return True
    return False

count = 0

for i in range(n):
    for j in range(m):
        if dfs(i, j):
            count += 1

print(count)