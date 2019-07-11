#include<stdio.h>
int main()
{
	int grade[5] = { 10,20,30,40,50 };
	int score[5];
	for (int i = 0; i < 5; i++)
	{
		score[i] = grade[i];
	}
	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\t\tscore[%d] = %d\n", i, grade[i], i, score[i]);
	}
}