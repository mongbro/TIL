#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int c1 = 0, c2 = 0;

	srand((unsigned)time(NULL));
	while (1) {
		system("cls");
		c1 += rand() % 5 + 1;
		c2 += rand() % 5 + 1;
		printf("CAR1 : ");
		for (int i = 0; i < c1; i++)
			printf("*");
		printf("\nCAR2 : ");
		for (int i = 0; i < c2; i++)
			printf("*");
		printf("\n================================\n");
		_getch();
	}
}