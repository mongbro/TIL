#include<stdio.h>
int main()
{
	int d, n, result;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &d);
	printf("2�� ���ϰ� ���� Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	result = d << n;
	printf("%d<<%d�� �� : %d", d, n, result);
	return 0;
}