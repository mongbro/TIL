#include<stdio.h>
int main()
{
	int n;
	double r, result = 1;
	printf("�Ǽ��� : ");
	scanf_s("%lf", &r);
	printf("�ŵ����� Ƚ�� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		result *= r;
	printf("����� : %lf", result);
	return 0;
}