#include<stdio.h>
int main()
{
	int n, r;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf_s("%d", &r);
	printf("%d<<%d�� �� : %d", n, r, n << r);
	return 0;
}