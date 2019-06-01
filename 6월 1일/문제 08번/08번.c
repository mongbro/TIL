#include<stdio.h>
int main()
{
	int n, odd = 0, even = 0, counter=0;
	do
	{
		scanf_s("%d", &n);
		if (n % 2 == 0)
			even++;
		else
			odd++;
		counter++;
	} while (counter != 10);
	printf("even : %d\nodd : %d", even, odd);
	return 0;
}