#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 5
int check(int id, int pw);
static int try = 0;
int main()
{
	int id, pw, result;

	while (1)
	{
		printf("ID : _____\b\b\b\b\b");
		scanf_s("%d", &id);
		printf("PW : _________\b\b\b\b\b\b\b\b\b");
		scanf_s("%d", &pw);
		result = check(id, pw);

		if (result == SUCCESS)
		{
			printf("�α��ο� �����ϼ̽��ϴ�.");
			break;
		}
		else if (result == FAIL)
			printf("�ٽ� Ȯ�����ּ���.\n�õ�Ƚ�� : %d\n", try);
		continue;
	}
	return 0;
}
int check(int id, int pw)
{
	static int user_id = 12345;
	static int user_pw = 987654321;
	extern try;
	try++;

	if (try >= LIMIT)
	{
		printf("5ȸ �������� �α����� �����ϼ̽��ϴ�.");
		exit(1);
	}
	if (id == user_id && pw == user_pw)
	{
		return SUCCESS;
	}
	else
		return FAIL;
}