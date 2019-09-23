#include<stdio.h>
#include"mong.h"
void show_digit(int n);

int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	show_digit(n);
	return 0;
}