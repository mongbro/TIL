#include<stdio.h>
int main()
{
	int c = 0, n, d = 2;
	for (; d <= 100; d++)
	{
		for (n = 1; n <= d; n++)
			if (d%n == 0)
				c++;
		if (c == 2)
			printf("%d ", d);
		c = 0;
	}
	return 0;
}