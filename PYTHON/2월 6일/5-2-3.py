from collections import deque

graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7],
]

visited = [False] * 9

def bfs(graph, start, visited):
    qu = deque([start])
    visited[start] = True
    while qu:
        v = qu.popleft()
        print(v, end=' ')
        for i in graph[v]:
            if not visited[i]:
                visited[i] = True
                qu.append(i)

bfs(graph, 1, visited)