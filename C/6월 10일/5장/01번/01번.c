#include<stdio.h>
int main()
{
	int x, y;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &y);
	printf("�� : %d   ������ : %d", x / y, x%y);
	return 0;
}