#include<stdio.h>
int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	x = ~x + 1;
	printf("2의 보수 : %d", x);
	return 0;
}