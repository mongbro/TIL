#include<stdio.h>
int main()
{
	double x;
	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &x);
	if (x > 0)
		printf("f(x)�� ���� %lf�Դϴ�.", 7 * x + 2);
	else
		printf("f(x)�� ���� %lf�Դϴ�.", x*x - 9 * x + 2);
	return 0;
}