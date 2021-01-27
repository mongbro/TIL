n, m = map(int, input().split())             # n x m 행열
visit = [[0] * m for _ in range(n)]          # 방문 여부 판단하는 맵
x, y, di = map(int, input().split())
visit[x][y] = 1                              # 시작점 방문여부 1로 수정
array = []                                   # 맵
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def turn_left():
    global di
    di -= 1
    if di == -1:
        di = 3

count = 1
turn_count = 0

while True:
    turn_left()             # 왼쪽으로 90도 회전
    nx = x + dx[di]         # 예정 x좌표 : 현재 x좌표 + dx로 한칸
    ny = y + dy[di]         # 예정 y좌표 : 현재 y좌표 + dy로 한칸
    if array[nx][ny] == 0 and visit[nx][ny] == 0:
        visit[nx][ny] = 1
        x, y = nx, ny
        count += 1
        turn_count = 0
        continue
    else:
       turn_count += 1
    if turn_count == 4:
        nx = x - dx[di]         # 예정 x좌표 : 현재 x좌표 - dx로 한칸
        ny = y - dy[di]         # 예정 y좌표 : 현재 y좌표 - dy로 한칸
        if array[nx][ny] == 0:
            x, y = nx, ny
            turn_count = 0
            continue
        else:
            break

print(count)