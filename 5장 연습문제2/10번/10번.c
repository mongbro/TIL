#include<stdio.h>
int main()
{
	int x, y;
	printf("x의 좌표를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("y의 좌표를 입력하시오 : ");
	scanf_s("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1사분면") : printf("4사분면")) : ((y > 0) ? printf("2사분면") : printf("3사분면"));

	return 0;
}