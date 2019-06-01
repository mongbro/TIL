#include<stdio.h>
int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	if (x > 0)
		printf("plus");
	else if (x == 0)
		printf("zero");
	else
		printf("minus");
	return 0;
}