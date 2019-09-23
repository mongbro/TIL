#include<stdio.h>
int main()
{
	int x, y;
	printf("x값을 입력하시오 : ");
	scanf("%d", &x);
	printf("y값을 입력하시오 : ");
	scanf("%d", &y);
	(x > 0) ? ((y > 0) ? printf("%d=x, %d=y일때 1사분면 입니다.", x, y) : printf("%d=x, %d=y일때 2사분면 입니다.", x, y)) : ((y < 0) ? (printf("%d=x, %d=y일때 4사분면 입니다.", x, y)) : (printf("%d=x, %d=y일때 3사분면 입니다.", x, y)));
	return 0;
}