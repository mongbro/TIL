#include<stdio.h>
int main()
{
	int counter = 0, j;
	for (int i = 2; i <= 100; i++)
	{
		for (j = i; j >= 1; j--)
		{
			if (i%j == 0)
				counter++;
		}
		if (counter == 2)
			printf("%d ", i);
		counter = 0;
	}
	return 0;
}