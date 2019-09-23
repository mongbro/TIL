#include<stdio.h>
int main()
{
	int base, height;
	double width;
	char a;
	do
	{
		printf("Base = ");
		scanf_s("%d", &base);
		printf("Height = ");
		scanf_s("%d", &height);
		width = base * height / 2;
		printf("Triangle width = %lf\n", width);
		printf("Continue? ");
		scanf_s("\n%c", &a, 1);
	} while (a == 'y' || a == 'Y');
	return 0;
}