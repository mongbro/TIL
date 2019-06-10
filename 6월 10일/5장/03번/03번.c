#include<stdio.h>
int main()
{
	int x, y, z;
	printf(" 3개의 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &x, &y, &z);
	(x > y) ? ((y > z) ? printf("최대값 : %d", x) : printf("최대값 : %d", z)) : ((y > z) ? printf("최대값 : %d", y) : printf("최대값 : %d", z));
	return 0;
}