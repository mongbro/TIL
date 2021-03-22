def two_max(A, start_index, end_index):
    if start_index == end_index:
        return A[start_index], None
    mid = (start_index + end_index) // 2
    if mid == start_index or mid == end_index:
        return
    M, m = A[start_index], A[end_index - 1]
    B = A[:mid]
    C = A[mid:]
    if len(A) == 3 or len(A) == 2:
        for i in range(len(A)):
            if m < A[i]:
                if M <= A[i]:
                    M = A[i]
                else:
                    m = A[i]
    B.append(two_max(B, start_index, mid))
    C.append(two_max(C, mid + 1, end_index))

    return M, m

A = [21,5,4,8,3,1,5,4,2,3,84,15,1,56,1,51,65,46,1,34,123,413,43,486,24]
M, m = two_max(A, 0, len(A) - 1)
print(m, M)