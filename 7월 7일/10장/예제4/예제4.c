#include<stdio.h>
int main()
{
	int score[5], sum=0;
	double avg;
	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ���� : %d\n", i + 1, score[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	avg = sum / 5;
	printf("��� : %.1lf", avg);
	return 0;
}