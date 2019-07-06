#include<stdio.h>
#include"mong.h"
void print_value(int n);
int main()
{
	int n;
	do
	{
		printf("값을 입력하시오(종료는 음수) : ");
		scanf_s("%d", &n);
		print_value(n);
		printf("\n");
	}while (n > 0);
	return 0;
}