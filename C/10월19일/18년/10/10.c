#include<stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1) {
		printf("좌석예약?");
		scanf(" %c", &ans1);

		if (ans1 == 'y') {
			printf("============================================\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("============================================\n");
			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");
			printf("몇번째 좌석을 예약?");
			scanf("%d", &ans2);
			if (ans2 <= 0 || ans2 > 10) {
				printf("1부터 10 사이의 수 입력");
				continue;
			}
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약됨\n");
			}
			else
				printf("이미 예약된 자리");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}