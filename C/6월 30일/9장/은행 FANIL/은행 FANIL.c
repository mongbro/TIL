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
			printf("%d���� ���� �ܰ�� %d�� �Դϴ�.\n", id, account);
			getchar();
			bank();
			break;
		}
		if (result == 2)
		{
			printf("�α��ο� �����߽��ϴ�. ���̵�� ��й�ȣ�� �ٽ� Ȯ�����ּ���.\n");
			printf("�α��� �õ� Ƚ�� : %dȸ\n", try);
			continue;
		}
		if (result == 3)
		{
			printf("�α����� 5ȸ �������� �����ϼ̽��ϴ�.");
			exit(1);
		}
	}
	return 0;
}