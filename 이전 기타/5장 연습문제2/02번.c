#include<stdio.h>
int main()
{
	double x, y;
	printf("2���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &x, &y);

	printf("�� : %lf  �� : %lf  �� : %lf  �� : %lf", x + y, x - y, x*y, x / y);
	return 0;
}