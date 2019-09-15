#include<stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("1부터 100까지의 합은 %d입니다.", sum);
	return 0;
}