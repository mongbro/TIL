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
			printf("�α��ο� �����ϼ̽��ϴ�.\n");
			bank();
			break;
		}
		if (result == 2)
		{
			printf("�α��ο� �����߽��ϴ�. �ٽ� Ȯ���� �ּ���.\n");
			printf("�α��� �õ� Ƚ�� : %dȸ\n", try);
			continue;
		}
		if (result == 3)
		{
			printf("5ȸ �������� �α��ο� �����ϼ̽��ϴ�.\n");
			printf("������������ �����Ͻð� �ش� �������� �湮�� �ֽñ� �ٶ��ϴ�.");
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
	printf("%d���� ���� �ܾ��� %d�� �Դϴ�.\n", id, account);
	while (1)
	{
		while (1)
		{
			printf("��/����� �����Ͻÿ�.(�Ա� : D,  ��� : W, ������ : Q) : ");
			scanf_s("\n%c", &choice, 1);
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			printf("������ D, W, Q �� �ϳ��� �����Ͻÿ�.\n");
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
	printf("�󸶸� �Ա��Ͻðڽ��ϱ�?");
	scanf_s("%d", &money);
	account += money;
	printf("%d���� ���� �ܾ��� %d�� �Դϴ�.\n", id, account);
}
void withdraw()
{

	printf("�󸶸� ����Ͻðڽ��ϱ�?");
	scanf_s("%d", &money);
	if (money > account)
		printf("������ ���� �ܾ׺��� ���� �ݾ��� ������ �� �����ϴ�.\n");
	else
	{
		account -= money;
		printf("%d���� ���� �ܾ��� %d�� �Դϴ�.\n", id, account);
	}
}