#include<stdio.h>
int get_integer();
void prime_num(int x);
int main()
{
	int x = get_integer();
	prime_num(x);
}
int get_integer()
{
	int x;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &x);
	return x;
}
void prime_num(int x)
{
	int n = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			n++;
		if (n > 2)
			break;
	}
	if (n == 2)
		printf("�Ҽ��Դϴ�.");
	else
		printf("�Ҽ��� �ƴմϴ�.");
}