#include<stdio.h>
#define MAX 5

int main() {
	int score[MAX], count, sum = 0, max, min;
	int i;

	for (i = 0; i < MAX; i++) {
		do {
			printf("%d, 학생점수? ", i + 1);
			scanf("%d", &score[i]);
		} while (score[i] > 100);
		sum += score[i];
	}

	max = min = score[0];
	for (i = 1; i < MAX; i++) {
		if (max < score[i])
			max = score[i];
		if (min > score[i])
			min = score[i];
	}
	for (i = 0; i < MAX; i++)
		printf("%d,    ", score[i]);
	printf("   , 평균 : %.2lf\n", (double)(sum / MAX));
	printf("최고점수 : %d     최저점수 : %d  ", max, min);
	return 0;
}