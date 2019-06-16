#include<stdio.h>
int main()
{
	int n, ten;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	ten = n / 10;
	n %= 10;
	printf("십의 자리 : %d\n일의 자리 : %d", ten, n);
	return 0;
}