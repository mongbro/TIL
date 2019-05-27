#include<stdio.h>
int main()
{
	int x = 0, sum = 0;

	for (; x <= 100; x += 3)
	{
		sum += x;
	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d 입니다.", sum);
	return 0;
}