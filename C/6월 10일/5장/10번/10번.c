#include<stdio.h>
int main()
{
	int x, y;
	printf("x�� ��ǥ : ");
	scanf_s("%d", &x);
	printf("y�� ��ǥ : ");
	scanf_s("%d", &y);
	(x > 0 && y > 0) ? printf("1��и�") : 0;
	(x < 0 && y > 0) ? printf("2��и�") : 0;
	(x < 0 && y < 0) ? printf("3��и�") : 0;
	(x > 0 && y < 0) ? printf("4��и�") : 0;
	return 0;
}