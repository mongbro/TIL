#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mong.h"
double f_rand();
int main()
{
	srand((unsigned)time(NULL));
	for (int n = 1; n <= 5; n++)
	{
		printf("%lf\t", f_rand());
	}
	return 0;
}