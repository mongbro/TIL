#include<stdio.h>
int main()
{
	int x, ten;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	ten = x / 10;
	x %= 10;
	printf("���� �ڸ� : %d\n���� �ڸ� : %d", ten, x);
	return 0;
}