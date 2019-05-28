#include<stdio.h>
int main()
{
	int sum, n = 1;
	sum = n;
	while (sum <= 10000)
	{
		n++;
		sum += n;
	}
	
	sum -= n;
	n--;

	printf("1부터 %d까지의 합이 %d입니다.", n, sum);
	
	return 0;
}