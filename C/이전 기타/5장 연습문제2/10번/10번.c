#include<stdio.h>
int main()
{
	int x, y;
	printf("x�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("y�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1��и�") : printf("4��и�")) : ((y > 0) ? printf("2��и�") : printf("3��и�"));

	return 0;
}