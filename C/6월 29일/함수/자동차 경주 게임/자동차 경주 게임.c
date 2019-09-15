#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int mps();
void dis(int n);
int main()
{
	int c1 = 0, c2 = 0;
	char a;

	srand((unsigned)time(NULL));

	do
	{
		scanf_s("\n%c", &a, 1);

		printf("Car1 : ");
		c1 += mps();
		dis(c1);

		printf("Car2 : ");
		c2 += mps();
		dis(c2);

		printf("\n------------------------------\n");
	} while (a != 'q' && a != 'Q');

	return 0;
}
int mps()
{
	int x;
	x = rand() % 5 + 1;
	return x;
}
void dis(int n)
{
	for (int i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}