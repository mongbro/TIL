#include<stdio.h>
int main()
{
	double x;
	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	if (x > 0)
		printf("f(x)�� ���� %lf", 7 * x + 2);
	else
		printf("f(x)�� ���� %lf", x*x - 9 * x + 2);

	return 0;
}