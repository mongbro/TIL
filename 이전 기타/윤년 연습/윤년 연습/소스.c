#include<stdio.h>
int main()
{
	int x, y;
	printf("x���� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("y���� �Է��Ͻÿ� : ");
	scanf("%d", &y);
	(x > 0) ? ((y > 0) ? printf("%d=x, %d=y�϶� 1��и� �Դϴ�.", x, y) : printf("%d=x, %d=y�϶� 2��и� �Դϴ�.", x, y)) : ((y < 0) ? (printf("%d=x, %d=y�϶� 4��и� �Դϴ�.", x, y)) : (printf("%d=x, %d=y�϶� 3��и� �Դϴ�.", x, y)));
	return 0;
}