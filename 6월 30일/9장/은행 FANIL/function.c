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
			printf("��/����� �����Ͻÿ�(�Ա� : D, ��� : W, ������ : Q) : ");
			scanf_s("\n%c", &choice, 1);
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			printf("�Է��� D, W, Q�� �ϳ��� �����մϴ�.\n");
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
	printf("�Ա� �ݾ��� �Է����ּ��� : ");
	scanf_s("%d", &money);
	account += money;
	printf("%d���� ���� �ܰ�� %d�� �Դϴ�.\n", id, account);
}
void withdraw()
{
	printf("��� �ݾ��� �Է����ּ��� : ");
	scanf_s("%d", &money);
	if (money > account)
	{
		printf("%d���� ���� �ܰ�� %d�� �Դϴ�.\n", id, account);
		printf("������ �ܰ��� ���� �ݾ��� ������ �� �����ϴ�.\n");
	}
	else
	{
		account -= money;
		printf("%d���� ���� �ܰ�� %d�� �Դϴ�.\n", id, account);
	}
}