#include<stdio.h>
#include"leap.h"
void is_leap(int yaer);

int main()
{
	int year;
	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);
	is_leap(year);
	return 0;
}