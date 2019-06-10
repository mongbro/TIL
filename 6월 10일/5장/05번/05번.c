#include<stdio.h>
int main()
{
	int input, ten, one;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &input);
	ten = input / 10;
	one = input % 10;
	printf("십의 자리 : %d\n일의 자리 : %d", ten, one);
	return 0;
}