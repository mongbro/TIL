import random, time

def unique_n(A):
    B = A
    for i in range(len(B)-1):
        if B[i]==B[i+1]:
            return "NO"
    return 'YES'

def unique_nlogn(A):
    A.sort()
    for i in range(len(A) - 1):
        if A[i] == A[i + 1]:
            return 'NO'
    return 'YES'

def unique_n2(A):
    for i in range(len(A)):
        for j in range(1, len(A) - 1):
            if A[i] == A[j] and i != j:
                return 'NO'
    return 'YES'

n = int(input())
A = random.sample(range(-n, n + 1), n)
print(A)

s = time.process_time()
print(unique_n(A))
e = time.process_time()
print(e - s)

s = time.process_time()
print(unique_nlogn(A))
e = time.process_time()
print(e - s)

s = time.process_time()
print(unique_n2(A))
e = time.process_time()
print(e - s)