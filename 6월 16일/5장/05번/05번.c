#include<stdio.h>
int main()
{
	int n, ten;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	ten = n / 10;
	n %= 10;
	printf("���� �ڸ� : %d\n���� �ڸ� : %d", ten, n);
	return 0;
}