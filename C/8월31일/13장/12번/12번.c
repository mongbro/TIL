#include<stdio.h>

struct card {
	int value;
	char suit;
};

int main() {
	struct card c[4][13];

	for (int i = 0; i <4; i++) {
		for (int j = 0; j < 13; j++) {
			c[i][j].value = j + 1;
		}
	}

	for (int i = 0; i < 13; i++) {
		c[0][i].suit = 'c';
	}
	for (int i = 0; i < 13; i++) {
		c[1][i].suit = 'd';
	}
	for (int i = 0; i < 13; i++) {
		c[2][i].suit = 'h';
	}
	for (int i = 0; i < 13; i++) {
		c[3][i].suit = 's';
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			printf("%c%d     ", c[i][j].suit, c[i][j].value);
		}
		printf("\n");
	}
	return 0;
}