#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int input, rn, count = 0;
	srand((unsigned)time(NULL));
	rn = rand() % 20 + 1;
	while (1) {
		printf("input : ");
		scanf("%d", &input);
		count++;
		if (input == rn) {
			printf("\n정답! 시도횟수 : %d", count);
			break;
		}
		if (input > rn) {
			printf("제시한 정수보다 낮습니다.\n");
			continue;
		}
		if (input < rn) {
			printf("제시한 정수보다 높습니다.\n");
			continue;
		}
	}
}