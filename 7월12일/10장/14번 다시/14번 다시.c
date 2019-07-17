#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	char arr[15][15];				//15 * 15 행열
	int n, rand_num, count = 0;		//n = 벌레가 몇번 이동 할건지
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = '.';		//각 배열의 초기값 : .
		}
	}
	arr[7][7] = '*';				//중앙에 있는 7행 7열은 초기값 : *
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("입력 : ");
	scanf_s("%d", &n);
	srand((unsigned)time(NULL));
	while (count <= n) {
		rand_num = rand() % 8;
		
		count++
	}
}