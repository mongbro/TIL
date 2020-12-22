time = input("근무 시간을 입력하시오 : ")
pay = input("시급을 입력하시오 : ")
if int(time) > 40:
    salary = (40 * int(pay)) + ((int(time) - 40) * int(pay) * 1.5)
else:
    salary = int(time) * int(pay)
print("총 임금은 " + str(salary))