#include<stdio.h>
#include<stdlib.h>
#define A 7
int main()
{
	int list[A] = { 5,4,8,3,1,2,9 }, tmp;
	for (int i = 0; i < A; i++)
	{
		for (int j = i + 1; j < A; j++)
		{
			if (list[i] > list[j])
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	for (int i = 0; i < A; i++)
	{
		printf("%d   ", list[i]);
	}
}