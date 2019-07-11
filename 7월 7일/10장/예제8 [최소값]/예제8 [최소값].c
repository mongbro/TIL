#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned)time(NULL));
	int price[10], tmp;

	for (int i = 0; i < 10; i++)
	{
		price[i] = rand() % 100 + 1;
	}

	printf("----------------------------------------\n");
	printf(" 1   2   3   4   5   6   7   8   9   10\n");
	printf("----------------------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d ", price[i]);
	}

	for (int i = 1; i < 9; i++)
	{
		if (price[0] > price[i])
		{
			tmp = price[0];
			price[0] = price[i];
			price[i] = tmp;
		}
	}
	printf("\n\n최소값은 %d입니다.", price[0]);
}