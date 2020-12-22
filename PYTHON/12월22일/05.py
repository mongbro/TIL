id_list = ['abc', 'def', 'ghi']
pw_list = ['123', '456', '789']

id = input("아이디를 입력하시오 : ")
pw = input("비밀번호를 입력하시오 : ")
for x in range(0, len(id_list)):
    if id == id_list[x]:
       index = x

if id in id_list:
    if pw != pw_list[index]:
        print("비밀번호가 틀림")

    else:
        print("로그인 성공")

else:
    print("입력한 아이디가 없음")