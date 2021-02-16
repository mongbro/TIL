arr = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
result = []

for i in range(len(arr)):
    result.append(min(arr))
    arr.remove(min(arr))

print(result)