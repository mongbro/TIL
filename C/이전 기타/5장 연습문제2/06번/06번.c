#include<stdio.h>
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	printf("2�� ���� : %d", ~x + 1);
	return 0;
}