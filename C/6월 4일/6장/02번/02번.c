#include<stdio.h>
int main()
{
	int x, y;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &x);
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &y);
	if (x%y == 0)
		printf("����Դϴ�.");
	else
		printf("���μ��Դϴ�.");
	return 0;
}