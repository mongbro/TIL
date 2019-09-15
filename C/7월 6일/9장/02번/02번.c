#include<stdio.h>
#include"mong.h"
#include<stdlib.h>
#include<time.h>

int get_dice_face();

int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;

int main()
{
	int result, n = 1;
	srand((unsigned)time(NULL));
	while (n <= 100)
	{
		n++;
		result = get_dice_face();
		if (result == 1)
			one++;
		if (result == 2)
			two++;
		if (result == 3)
			three++;
		if (result == 4)
			four++;
		if (result == 5)
			five++;
		if (result == 6)
			six++;
	}
	printf("1->%d\n", one);
	printf("2->%d\n", two);
	printf("3->%d\n", three);
	printf("4->%d\n", four);
	printf("5->%d\n", five);
	printf("6->%d", six);
	return 0;
}