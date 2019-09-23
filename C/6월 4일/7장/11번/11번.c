#include<stdio.h>
int main()
{
	int d, sum = 0, result=0;
	printf("n값을 입력하시오 : ");
	scanf_s("%d", &d);
	for (int i = 1; i <= d; i++)
	{
		sum = i * i;
		result += sum;
	}
	printf("계산값은 %d입니다.", result);
	return 0;
}