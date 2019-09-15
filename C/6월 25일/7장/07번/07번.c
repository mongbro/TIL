#include<stdio.h>
int main()
{
	int count, j;
	for (int i = 2; i <= 100; i++)
	{
		count = 0;
		for (j = i; j >= 1; j--)
		{
			if (i%j == 0)
				count++;
		}
		if (count == 2)
			printf("%d ", i);
	}
	return 0;
}