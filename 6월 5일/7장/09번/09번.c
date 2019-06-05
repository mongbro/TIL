#include<stdio.h>
int main()
{
	int sum = 0, i = 1;
	for (; sum <= 10000; i++)
	{
		sum += i;
	}
	i--;
	sum -= i;
	i--;
	
	printf("1부터 %d까지의 합이 %d입니다.", i, sum);
	return 0;
}