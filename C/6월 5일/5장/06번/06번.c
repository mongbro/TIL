#include<stdio.h>
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	x = ~x + 1;
	printf("2�� ���� : %d", x);
	return 0;
}