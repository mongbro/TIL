#include<stdio.h>
int main()
{
	int n, j;
	for (int i = 2; i <= 100; i++)
	{
		n = 0;
		j = 1;
		for (; j <= i; j++)
		{
			if (i%j == 0)
				n++;
		}
		j--;
		if (n == 2)
			printf("%d ", j);
	}
	return 0;
}