#include<stdio.h>
int main()
{
	int x, ten;
	printf("100���� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	ten = x / 10;
	x = x % 10;

	printf("�����ڸ� : %d\n�����ڸ� : %d", ten, x);
	return 0;
}