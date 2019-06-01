#include<stdio.h>
int main()
{
	int n, sum=0;
	do
	{
		scanf_s("%d", &n);
		for(;n<=100;n++)
			sum += n;
	} while (n <= 100);
	printf("%d", sum);
	return 0;
}