arr = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

for i in range(len(arr)):
    min_index = i
    for j in range(i + 1, len(arr)):
        if arr[min_index] > arr[j]:
            min_index = j
    arr[i], arr[min_index] = arr[min_index], arr[i]

print(arr)

# 다른 방법
arr = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
arr2 = []

for i in range(len(arr)):
    arr2.append(min(arr))
    arr.remove(min(arr))

print(arr2)