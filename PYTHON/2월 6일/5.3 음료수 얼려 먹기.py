n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

count = 0

def one_piece(x, y):
    if x <= -1 or x >= n or y <= -1 or y >= m:        # 범위 벗어나면 바로 종료
        return False
    if arr[x][y] == 0:                                # 아직 범위가 남아있을 때
        arr[x][y] = 1
        one_piece(x - 1, y)
        one_piece(x + 1, y)
        one_piece(x, y - 1)
        one_piece(x, y + 1)
        return True
    return False                                      # arr[x][y] == 1일때 즉, 얼음이 아닐 때

for i in range(n):
    for j in range(m):
        if one_piece(i, j):
            count += 1

print(count)