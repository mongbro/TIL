#include<stdio.h>
int main()
{
	int x, y, result;
	printf("두 수를 입력하시오 : ");
	scanf_s("%d%d", &x, &y);
	if (x > y)
		result = x - y;
	else
		result = y - x;
	printf("결과값 : %d", result);
	return 0;
}