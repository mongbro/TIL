score = input("이수한 학점을 입력하시오")
grade = input("평점을 입력하시오")
if int(score) >= 140 and float(grade) >= 2.0:
    print("졸업 가능")
else:
    print("졸업 불가")