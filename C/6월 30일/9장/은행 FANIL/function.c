#include<stdio.h>

void bank();
void deposit();
void withdraw();

int id, pw, try = 0, result, account = 1500000, money;
const int USER_ID = 4607, USER_PW = 748578;
char choice;

int check()
{
	if (try == 5)
		return 3;
	if (USER_ID == id && USER_PW == pw)
		return 1;
	else
	{
		try++;
		return 2;
	}
}
void bank()
{
	while (1)
	{
		while (1)
		{
			printf("입/출금을 선택하시오(입금 : D, 출금 : W, 나가기 : Q) : ");
			scanf_s("\n%c", &choice, 1);
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			printf("입력은 D, W, Q중 하나만 가능합니다.\n");
		}
		if (choice == 'Q' || choice == 'q')
			break;
		switch (choice)
		{
		case 'd':
		case 'D':
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
	printf("입금 금액을 입력해주세요 : ");
	scanf_s("%d", &money);
	account += money;
	printf("%d님의 통장 잔고는 %d원 입니다.\n", id, account);
}
void withdraw()
{
	printf("출금 금액을 입력해주세요 : ");
	scanf_s("%d", &money);
	if (money > account)
	{
		printf("%d님의 통장 잔고는 %d원 입니다.\n", id, account);
		printf("본인의 잔고보다 많은 금액은 인출할 수 없습니다.\n");
	}
	else
	{
		account -= money;
		printf("%d님의 통장 잔고는 %d원 입니다.\n", id, account);
	}
}