#include<stdio.h>
int main()
{
	int x, y, z;
	printf(" 3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &x, &y, &z);
	(x > y) ? ((y > z) ? printf("�ִ밪 : %d", x) : printf("�ִ밪 : %d", z)) : ((y > z) ? printf("�ִ밪 : %d", y) : printf("�ִ밪 : %d", z));
	return 0;
}