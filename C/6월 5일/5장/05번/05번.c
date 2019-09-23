#include<stdio.h>
int main()
{
	int x, ten;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	ten = x / 10;
	x %= 10;
	printf("십의 자리 : %d\n일의 자리 : %d", ten, x);
	return 0;
}