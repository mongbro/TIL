#include<stdio.h>
int main()
{
	int x, ten;
	printf("100보다 작은 정수를 입력하시오 : ");
	scanf_s("%d", &x);

	ten = x / 10;
	x = x % 10;

	printf("십의자리 : %d\n일의자리 : %d", ten, x);
	return 0;
}