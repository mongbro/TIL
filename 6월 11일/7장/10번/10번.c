#include<stdio.h>
int main()
{
	int n;
	double r, result=1;
	printf("�Ǽ���  ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		result *= r;
	printf("������� %lf�Դϴ�.", result);
	return 0;
}