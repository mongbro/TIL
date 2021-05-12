people = ['홍', '이', '김', '이', '이', '김']
def max_count(people):
    counts = {}
    for i in people:
        if i in counts:
            counts[i] += 1
        else:
            counts[i] = 1
    return counts
counts = max_count(people)
print(counts.items())