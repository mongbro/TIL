n, m = map(int , input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

def piece(x, y):
    if x >= n or x <= -1 or y >= m or y <= -1:
        return False
    if arr[x][y] == 0:
        arr[x][y] = 1
        piece(x - 1, y)
        piece(x + 1, y)
        piece(x, y - 1)
        piece(x, y + 1)
        return True
    return False

count = 0
for i in range(n):
    for j in range(m):
        if piece(i, j):
            count += 1

print(count)