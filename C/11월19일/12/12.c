#include<stdio.h>

typedef struct card {
	int value;
	char suit;
}CARD;

int main() {
	CARD c[62];
	for (int i = 0; i < 52; i++) {
		int j = 0;
		int num = 1;
		int ch = 0;
		for (; j < 52; j++, num++) {
			if (num == 14) {
				num = 1;
				ch++;
			}
			c[j].value = num;
			if (ch == 0)
				c[j].suit = 'c';
			if (ch == 1)
				c[j].suit = 'd';
			if (ch == 2)
				c[j].suit = 'h';
			if (ch == 3)
				c[j].suit = 's';
		}
	}
	for (int i = 0, j = 0; i < 52; i++, j++) {
		if (j == 13) {
			j = 0;
			printf("\n");
		}
		printf("%d : %c  ", c[i].value, c[i].suit);

	}
}