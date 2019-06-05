#include<stdio.h>
int main()
{
	int x, y;
	printf("(x, y)의 값을 입력하시오 : ");
	scanf_s("%d%d", &x, &y);
	(x > 0) ? ((y > 0) ? printf("1사분면") : printf("4사분면")) : ((y > 0) ? printf("2사분면") : printf("3사분면"));
	return 0;
}