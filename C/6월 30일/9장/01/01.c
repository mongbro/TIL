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
			printf("�α��� ����");
			break;
		}
		if (result == 2)
		{
			printf("%dȸ �õ�\n", try_count);
			printf("���̵�� ��й�ȣ�� �ٽ� Ȯ�����ּ���.\n");
		}
		if (result == 3)
		{
			printf("5ȸ �������� �α��ο� �����ϼ̽��ϴ�.\n");
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