str = input("input : ")
length = len(str)
if length % 2 == 0:
    center1 = str[length//2 - 1]
    center2 = str[length//2]
    print("중앙 글자는 " + center1 + ", " + center2)
else:
    center = str[length//2]
    print("중앙 글자는 " + center)