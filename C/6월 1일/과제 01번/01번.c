#include<stdio.h>
int main()
{
	int x, y, result;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &y);
	if (x > y)
		result = x - y;
	else
		result = y - x;
	printf("����� : %d", result);
	return 0;
}