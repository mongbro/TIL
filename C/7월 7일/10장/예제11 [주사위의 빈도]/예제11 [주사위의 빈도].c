#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dice_face[6] = { 0 };

	for (int i = 1; i < 10000; i++)
	{
		++dice_face[rand() % 6];
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%dÀÇ ºóµµ¼ö : %d\n", i + 1, dice_face[i]);
	}
}