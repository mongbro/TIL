#include<stdio.h>
#include"mong.h"
int f_equl(double a, double b);

int main()
{
	double a, b;
	int result;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &a);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &b);
	result = f_equl(a, b);
	if (result == 1)
		printf("�� ���� �Ǽ��� ���� ����");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�");
	return 0;
}