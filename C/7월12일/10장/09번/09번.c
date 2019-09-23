#include<stdio.h>
#include<stdlib.h>

int max_value(int a[][4], int n);			//해당 시험(열)의 최대값
int min_value(int a[][4], int n);			//해당 시험(열)의 최소값

int main() {
	int arr[10][4];
	for (int i = 0; i < 10; i++) {
		for (int j = 0 ; j < 4; j++) {
			arr[i][j] = rand() % 101;		//0점부터 100점까지 난수
		}
	}
	arr[0][0] = 1;							//0열은 번호
	arr[1][0] = 2;							//0열은 번호
	arr[2][0] = 3;							//0열은 번호
	arr[3][0] = 4;							//0열은 번호
	arr[4][0] = 5;							//0열은 번호
	arr[5][0] = 6;							//0열은 번호
	arr[6][0] = 7;							//0열은 번호
	arr[7][0] = 8;							//0열은 번호
	arr[8][0] = 9;							//0열은 번호
	arr[9][0] = 10;							//0열은 번호
	for (int i = 0; i < 10; i++) {
		for (int j=0; j < 4; j++) {
			printf("%2d   ", arr[i][j]);	//일단 한번 찍고 가자
		}
		printf("\n");
	}
	for (int i=1;i<4;i++){
		printf("시험#%d의 최대점수 = %d\n", i, max_value(arr, i));
		printf("시험#%d의 최소점수 = %d\n\n", i, min_value(arr, i));
	}
}

int max_value(int a[][4], int n) {
	int max=a[0][n];							//n열의 초기 최대값
	for (int i = 0; i < 10; i++) {
		if (a[i][n] > max)
			max = a[i][n];						//n열의 최대값
	}
	return max;
}

int min_value(int a[][4], int n) {
	int min = a[0][n];							//n열의 초기 최소값
	for (int i = 0; i < 10; i++) {
		if (a[i][n] < min)
			min = a[i][n];						//n열의 최소값
	}
	return min;
}