#include<stdio.h>
int main()
{
	double r, result = 1;
	int n, d = 1;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (; d <= n; d++)
		result *= r;

	printf("%.1lf�� %d������ %lf�Դϴ�.", r, n, result);
	return 0;
}