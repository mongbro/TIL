#include<stdio.h>
int main()
{
	int n, sum = 0;
	for (n = 1; sum <= 10000; n++)
		sum += n;
	n--;
	sum -= n;
	n--;
	printf("1부터 %d까지의 합이 %d입니다.", n, sum);
	return 0;
}