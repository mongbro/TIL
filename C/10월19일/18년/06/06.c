#include<stdio.h>
#define MAX 5

int main() {
	int score[MAX], count, sum = 0, max, min;
	int i;

	for (i = 0; i < MAX; i++) {
		do {
			printf("%d, �л�����? ", i + 1);
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
	printf("   , ��� : %.2lf\n", (double)(sum / MAX));
	printf("�ְ����� : %d     �������� : %d  ", max, min);
	return 0;
}