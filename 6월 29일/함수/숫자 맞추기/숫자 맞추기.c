#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int guess, number, counter;
	srand((unsigned)time(NULL));
	number = rand() % 19 + 1;
	counter = 0;
	do
	{
		printf("1���� 20 ������ �������߾���� >> ");
		scanf("%d", &guess);
		counter++;
		if (guess > number)
			printf("����\n");
		else if (guess < number)
			printf("����\n");
	} while (guess != number);

	printf("\n�����Դϴ�. �õ�Ƚ�� %d", counter);
	return 0;
}