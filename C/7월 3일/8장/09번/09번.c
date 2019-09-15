#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mong.h"
int b_rand();
int main()
{
	int n;
	srand((unsigned)time(NULL));
	for (n = 1; n <= 5; n++)
	{
		printf("%d", b_rand());
	}
	return 0;
}