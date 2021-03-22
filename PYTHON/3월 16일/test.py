def two_max(A, left, right):
    if left == right:
        return A[left], None

    mid = len(A)// 2

    if mid > 2:
        arrA = A[:mid]
        arrB = A[mid:]

        result = []
        a, b = two_max(arrA, left, mid)
        c, d = two_max(arrB, mid, right)
        result.extend([a, b, c, d])

    M, m = 0, 0
    for arr in A:
        if m < arr:
            if M < arr:
                m = M
                M = arr
            else:
                m = arr

    return M, m

# ===== 메인 함수 =====
A = [21,5,4,8,3,1,5,4,2,3,84,15,1,56,1,51,65,46,1,34,123,413,43,486,24]
M, m = two_max(A, 0, len(A) - 1)
print(M, m)