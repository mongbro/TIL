#include<stdio.h>
int check(int a, int b);
const int USER_ID = 123, USER_PW = 748578;
int try = 0;
int main()
{
	int id, pw, result;
	while (1)
	{
		printf("ID : _____\b\b\b\b\b");
		scanf_s("%d", &id);
		printf("PW : __________\b\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &pw);
		result = check(id, pw);
		if (result == 0)
		{
			printf("5ȸ �������� �����ϼ̽��ϴ�.");
			break;
		}
		if (result == 1)
		{
			printf("�α��� ����");
			break;
		}
		if (result == 2)
			printf("%dȸ �õ�", try);
			printf("�����ϼ̽��ϴ�.\n");
	}
	return 0;
}
int check(int a, int b)
{
	try++;
	if (try == 5)
	{
		return 0;
	}
	if (USER_ID == a && USER_PW == b)
		return 1;
	else
	{

		return 2;
	}
}