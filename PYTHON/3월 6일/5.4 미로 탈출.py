from collections import deque

n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def bfs(x, y):
    qu = deque()
    qu.append((x, y))
    while qu:
        x, y = qu.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            if arr[nx][ny] == 0:
                continue
            if arr[nx][ny] == 1:
                if nx == 0 and ny == 0:
                    continue
                arr[nx][ny] = arr[x][y] + 1
                qu.append((nx, ny))
    return arr[n - 1][m - 1]

print(bfs(0, 0))
for i in range(n):
    for j in range(m):
        print("%2d" % arr[i][j], end=' ')
    print()