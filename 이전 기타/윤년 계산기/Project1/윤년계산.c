/*윤년 계산하기*/

#include<stdio.h>
int main()
{
	int year, result;

	printf("년도를 입력하시오 : ");
	scanf("%d", &year);

	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

	if (result == 0)
	{
		printf("윤년이 아닙니다.");
	}

	if (result == 1)
	{
		printf("윤년입니다.");
	}

	return 0;
}