#include<stdio.h>
int main()
{
	int x, y, z;
	printf("x값과 y값을 입력하시오 : ");
	scanf("%d%d", &x, &y);
	printf("x = %d y = %d\n", x, y);

	z = x;
	x = y;
	y = z;

	printf("두 수의 자리를 바꾼 값\nx = %d y = %d", x, y);
	return 0;
}