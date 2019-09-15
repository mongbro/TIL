#include<stdio.h>
#include<stdlib.h>

int check();
void bank();
void deposit();
void withdraw();

extern int id, pw, try, account, money;
extern const int USER_ID, USER_PW;
extern char choice;

int main()
{
	int result;
	while (1)
	{
		printf("ID : ______\b\b\b\b\b\b");
		scanf_s("%d", &id);
		printf("PW : __________\b\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &pw);
		try++;
		result = check();
		if (result == 1)
		{
			printf("로그인에 성공하셨습니다.\n");
			bank();
			break;
		}
		if (result == 2)
		{
			printf("로그인에 실패했습니다. 다시 확인해 주세요.\n");
			printf("로그인 시도 횟수 : %d회\n", try);
			continue;
		}
		if (result == 3)
		{
			printf("5회 연속으로 로그인에 실패하셨습니다.\n");
			printf("공인인증서를 지참하시고 해당 은행으로 방문해 주시기 바랍니다.");
			exit(1);
		}
	}
	return 0;
}
int check()
{
	if (try == 5)
		return 3;
	if (USER_ID == id && USER_PW == pw)
		return 1;
	else
		return 2;
}
void bank()
{
	printf("%d님의 통장 잔액은 %d원 입니다.\n", id, account);
	while (1)
	{
		while (1)
		{
			printf("입/출금을 선택하시오.(입금 : D,  출금 : W, 나가기 : Q) : ");
			scanf_s("\n%c", &choice, 1);
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			printf("선택은 D, W, Q 중 하나를 선택하시오.\n");
		}
		if (choice == 'q' || choice == 'Q')
			break;
		switch (choice)
		{
		case 'D':
		case 'd':
			deposit();
			break;
		case 'w':
		case 'W':
			withdraw();
			break;
		}
	}
}
void deposit()
{
	printf("얼마를 입금하시겠습니까?");
	scanf_s("%d", &money);
	account += money;
	printf("%d님의 통장 잔액은 %d원 입니다.\n", id, account);
}
void withdraw()
{

	printf("얼마를 출금하시겠습니까?");
	scanf_s("%d", &money);
	if (money > account)
		printf("본인의 통장 잔액보다 많은 금액을 인출할 수 없습니다.\n");
	else
	{
		account -= money;
		printf("%d님의 통장 잔액은 %d원 입니다.\n", id, account);
	}
}