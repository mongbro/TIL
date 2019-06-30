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
		printf("1에서 20 사이의 수를맞추어보세요 >> ");
		scanf("%d", &guess);
		counter++;
		if (guess > number)
			printf("높다\n");
		else if (guess < number)
			printf("낮다\n");
	} while (guess != number);

	printf("\n정답입니다. 시도횟수 %d", counter);
	return 0;
}