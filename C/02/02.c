#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void get_dice_face();

int main() {
	srand((unsigned)time(NULL));
	get_dice_face();
}

void get_dice_face() {
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, count = 0;
	while (count < 100) {
		switch (rand() % 6 + 1) {
		case 1:
			f1++;
			break;
		case 2:
			f2++;
			break;
		case 3:
			f3++;
			break;
		case 4:
			f4++;
			break;
		case 5:
			f5++;
			break;
		case 6:
			f6++;
			break;
		}
		count++;
	}

	printf("1 => %d\n", f1);
	printf("2 => %d\n", f2);
	printf("3 => %d\n", f3);
	printf("4 => %d\n", f4);
	printf("5 => %d\n", f5);
	printf("6 => %d\n", f6);
}