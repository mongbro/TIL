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
			printf("\n����! �õ�Ƚ�� : %d", count);
			break;
		}
		if (input > rn) {
			printf("������ �������� �����ϴ�.\n");
			continue;
		}
		if (input < rn) {
			printf("������ �������� �����ϴ�.\n");
			continue;
		}
	}
}