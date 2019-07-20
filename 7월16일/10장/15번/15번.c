#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	char arr[10][10];
	int n, m, count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = '.';
		}
	}
	while(count<10) {
		srand((unsigned)time(NULL));
		n = rand() % 10;
		m = rand() % 10;		//10*10배열 중 하나를 갖는 한 쌍의 좌표 * 10
		if (arr[n][m] == '#')
			continue;		//중복 검사
		arr[n][m] = '#';
		count++;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}