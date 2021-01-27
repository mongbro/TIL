n, m = map(int, input().split())             # 맵 구조
d = [[0] * m for _ in range(n)]              # 방문 여부 판별 0이면 아직 미방문 1이면 이미 방문
x, y, di = map(int, input().split())         # 캐릭터 초기위치 + 방향
d[x][y] = 1

array = []                  # array 에 0이면 땅, 1이면 바다
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def turn_left():            # 방향전환
    global di
    di -= 1
    if di == -1:
        di = 3

count = 1
turn_time = 0

while True:
    turn_left()                     # 회전
    nx = x + dx[di]
    ny = y + dy[di]
    if array[nx][ny] == 0 and d[nx][ny] == 0:   # 회전하고 보이는 곳이 땅이고 방문 안한 경우
        d[nx][ny] = 1
        x, y = nx, ny
        count += 1
        turn_time = 0
        continue
    else:                                       # 회전하고 보이는 곳이 바다이거나 방문한 경우
        turn_time += 1
    if turn_time == 4:                          # 네 방향 모두 갈 곳이 없으면
        nx = x - dx[di]
        ny = y - dy[di]
        if array[nx][ny] == 0:                   # 뒤로 갈 수 있으면
            x, y = nx, ny                        # 뒤로 가기
            turn_time = 0
        else:                                    # 뒤로 못가면
            break

print(count)