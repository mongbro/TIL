#include<stdio.h>
int main()
{
	int x, y, result;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf_s("%d", &y);
	result = x << y;
	printf("%d<<%d�� �� : %d", x, y, result);
	return 0;
}