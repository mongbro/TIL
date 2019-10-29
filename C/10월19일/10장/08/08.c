#include<stdio.h>
#include<math.h>

int main() {
	double score[10], avg, ver;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("입력 : ");
		scanf("\n%lf", &score[i]);
		sum += score[i];
	}
	avg = sum / 10;
	for (int i = 0; i < 10; i++) {
		printf("%lf ", score[i]);
	}
	sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += (score[i] - avg) * (score[i] - avg);
	}
	ver = sqrt((sum / 10), 2);
	printf("\n평균 : %lf      표준편차 : %lf", avg, ver);
}