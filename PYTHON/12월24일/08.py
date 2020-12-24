def is_prime(value):
    count = 0
    for i in range(2, value):
        if value % i == 0:
            count += 1
    if count == 0:
        return True
    else:
        return False


while True:
    a = int(input("정수를 입력하시오 >> "))
    print(is_prime(a))
