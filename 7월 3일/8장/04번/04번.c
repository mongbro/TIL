#include<stdio.h>
#include"leap.h"
void is_leap(int yaer);

int main()
{
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);
	is_leap(year);
	return 0;
}