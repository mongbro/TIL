#include<stdio.h>
#include"mong.h"
int get_tax(int n);
int main()
{
	int salary;
	printf("소득을 입력하시오(만원) : ");
	scanf_s("%d", &salary);
	printf("소득세는 %d입니다.", get_tax(salary));
	return 0;
}