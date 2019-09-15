#include<stdio.h>
#include<stdlib.h>

int main() {
	char board[10][10];
	int n, m, count = 30;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = '.';
		}
	}
	while (count != 0) {
		n = rand() % 10;
		m = rand() % 10;
		if (board[n][m] == '#')
			continue;
		board[n][m] = '#';
		count--;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}