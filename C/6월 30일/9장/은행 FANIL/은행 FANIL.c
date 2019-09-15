#include<stdio.h>
#include<stdlib.h>

extern int id, pw, try, result, account;

extern int check();
extern void bank();

int main()
{
	while (1)
	{
		printf("ID : ______\b\b\b\b\b\b");
		scanf_s("%d", &id);
		printf("PW : __________\b\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &pw);
		result = check();
		if (result == 1)
		{
			printf("%d님의 통장 잔고는 %d원 입니다.\n", id, account);
			getchar();
			bank();
			break;
		}
		if (result == 2)
		{
			printf("로그인에 실패했습니다. 아이디와 비밀번호를 다시 확인해주세요.\n");
			printf("로그인 시도 횟수 : %d회\n", try);
			continue;
		}
		if (result == 3)
		{
			printf("로그인을 5회 연속으로 실패하셨습니다.");
			exit(1);
		}
	}
	return 0;
}