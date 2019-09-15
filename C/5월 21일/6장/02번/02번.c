#include<stdio.h>
int main()
{
	int x, y;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &y);

	if (x%y == 0)
		printf("약수입니다.");
	else
		printf("서로소입니다.");
	return 0;
}