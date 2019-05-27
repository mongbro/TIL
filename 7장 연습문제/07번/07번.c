/***************모르것다!!!!!!!!!!!!!!!*****************/



#include<stdio.h>
int main()
{
	for (int i = 2; i <= 100; i++)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (i%j == 0)
				break;
			else
				printf("%d ", i);
		}
	}
	return 0;
}