#include<stdio.h>
int main()
{
	int n = 0;
	for (int i = 2; i <= 100; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			if (i%j == 0)
				n++;
		}
		if (n == 2)
			printf("%d ", i);
		n = 0;
	}
	return 0;
}