#include<stdio.h>
int main()
{
	int x, y, z, max;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &x, &y, &z);
	max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
	printf("�ִ밪 : %d", max);
	return 0;
}