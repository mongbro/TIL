#include<stdio.h>
#define SIZE 10

int main() {
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1) {
		printf("Y or N");
		scanf("%c", &ans1);

		if (ans1 == 'y') {
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("몇번째예약?");
			scanf("%d", &ans2);
			if (ans2 < 1 || ans2>10) {
				printf("1~10\n");
				continue;
			}
			if (seats[ans2] == 0) {
				seats[ans2] = 1;
				printf("예약됨\n");
			}
			else
				printf("이미예약\n");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}