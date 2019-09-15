#include<stdio.h>
#include<stdlib.h>
#define USER_ID 1234				//������ ���̵�� �����Ǿ������Ƿ� ��ȣ���ó��
#define USER_PW 748578				//������ ��й�ȣ�� �����Ǿ������Ƿ� ��ȣ���ó��

int check();						//�Է��� ID�� PW�� ������ �Ͱ� ������ Ȯ���ϴ� �Լ�
void bank();						//�Ա� �Ǵ� ����� �����ϴ� �Լ�
void deposit();						//�Ա��� �����ϴ� �Լ�
void withdraw();					//����� �����ϴ� �Լ�

int account_1234 = 100000, try = 0, id, pw, money;		//account_1234�� ���� 1234�� ���� �ܾ�, try�� �α��� �õ�Ƚ��, money�� ��/��� �׼��̴�.

int main()
{
	int result;
	while (1)
	{
		printf("ID : ________\b\b\b\b\b\b\b\b");										//" \b " �� Ŀ���� 1ĭ�� �ڷ� �ű�� ��ɾ�
		scanf_s("%d", &id);
		printf("PW : ____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");	//�� �Է½� �� ���� _���� ������鼭 �� �ڸ��� ���ڰ� ����.
		scanf_s("%d", &pw);
		result = check();
		if (result == 1)
		{
			printf("�α��� ����\n");
			bank();							//�α��ο� �����ÿ��� bank�Լ��� �����Ѵ�.
			break;
		}
		if (result == 2)
		{
			printf("�α��ο� �����߽��ϴ�. �ٽ� �õ����ּ���.\n");
			printf("�õ�Ƚ�� : %d\n", try);					//try�� Ƚ���� �����̻� �Ѿ�� ������ �ᱺ��.
		}
		if (result == 3)
		{
			printf("5ȸ �������� �α��ο� �����Ͽ����ϴ�. ������������ �����ϰ� �ش� �������� �湮���ֽñ� �ٶ��ϴ�.");			//������������ ��Ƽ��X�� ���� ������ ȭ��� �������� �������˻縦 �ϰ� �ð��ʰ��Ǽ� ó������ �ٽ� �õ��ؾߵȴ�.
			break;
		}
	}
	return 0;
}

int check()
{
	if (try == 5)					//�α��� �õ� Ƚ���� 5ȸ�� �Ѿ�� 3�� ��ȯ�Ѵ�.
		return 3;
	if (USER_ID == id && USER_PW == pw)
		return 1;
	else
		try++;
		return 2;
}
void bank()
{
	char choice;
	printf("%d���� ���� �ܾ��� %d�� �Դϴ�.\n", id, account_1234);
	while (1)
	{
		int n = 0;						//��� �峭
		while (1)
		{
			printf("��/����� �����Ͻÿ�(�Ա� : D,  ��� : W,  ������ : Q) : ");
			scanf_s("\n%c", &choice, 1);										//�տ� \n�� �Ⱥ��̸�  ���͸� �Է°����� �޾ƹ�����.
			n++;
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			if (n >= 10)
			{
				printf("������ �ϼ���. ���밡������? D �Ǵ� W�� �������\n");
				if (n >= 20)
					printf("��������\n");
			}
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
		}
		if (choice == 'q' || choice == 'Q')
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

	printf("�󸶸� �Ա��Ͻðڽ��ϱ�?");
	scanf_s("%d", &money);
	account_1234 += money;								//account�� �Աݾ��� ���Ѵ�.
	printf("%d���� ���� �ܾ��� %d�� �Դϴ�.\n", id, account_1234);
}
void withdraw()
{
	while (1)
	{
		printf("�󸶸� ����Ͻðڽ��ϱ�?");
		scanf_s("%d", &money);
		if (money > account_1234)
			printf("�ܾ׺��� ���� �ݾ��� ����� �� �����ϴ�.\n");
		else
		{
			account_1234 -= money;					//account�� �Աݾ��� ����.
			printf("%d���� ���� �ܾ��� %d�Դϴ�.\n", id, account_1234);
			break;
		}
	}
}