#include<stdio.h>
int main()
{
	int j, n = 0, i = 2;

	for (; i <= 100; i++)
	{
		j = i;

		while (j>0)
		{
			if (i%j == 0)
				n++;
			j--;
		}

		if (n == 2)
			printf("%d ", i);
		n = 0;
	}
	return 0;
}