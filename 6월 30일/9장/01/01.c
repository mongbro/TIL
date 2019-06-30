#include<stdio.h>
int check();
int id, pw, try_count=0;
int main()
{
	int result;
	while (1)
	{
		printf("ID : __________\b\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &id);
		printf("PW : __________\b\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &pw);
		result = check();
		if (result == 1)
		{
			printf("로그인 성공");
			break;
		}
		if (result == 2)
		{
			printf("%d회 시도\n", try_count);
			printf("아이디와 비밀번호를 다시 확인해주세요.\n");
		}
		if (result == 3)
		{
			printf("5회 연속으로 로그인에 실패하셨습니다.\n");
			break;
		}
	}
	return 0;
}
int check()
{
	static int user_id = 12345;
	static int user_pw = 748578;
	if (try_count == 5)
	return 3;
	if (user_id == id && user_pw == pw)
		return 1;
	else
	{
		try_count++;
		return 2;
	}
}