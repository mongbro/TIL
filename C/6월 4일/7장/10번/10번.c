#include<stdio.h>
int main()
{
	double r, result=1;
	int n;
	printf("�Ǽ��� ���� �Է��ϼ��� : ");
	scanf_s("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		result = result * r;
	printf("������� %lf�Դϴ�.", result);
	return 0;
}