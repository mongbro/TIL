#include<stdio.h>
int main()
{
	int x, y, z;
	printf("x���� y���� �Է��Ͻÿ� : ");
	scanf("%d%d", &x, &y);
	printf("x = %d y = %d\n", x, y);

	z = x;
	x = y;
	y = z;

	printf("�� ���� �ڸ��� �ٲ� ��\nx = %d y = %d", x, y);
	return 0;
}