#include<stdio.h>

int sum_row(int a[][5], int n);		//2중배열을 함수에 호출할때는 배열의 열정보를 입력해줘야한다
								//int a[][]라고 쓰면 컴파일오류
int sum_col(int a[][5], int n);

int main() {
	int arr[][5] = { 12,56,32,16,98,99,56,34,41,3,65,3,87,78,21 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d   ", arr[i][j]);			//배열 한번 찍고 가자
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		printf("%d행의 합계 = %d\n", i, sum_row(arr, i));
	}
	for (int i = 0; i < 5; i++) {
		printf("%d열의 합계 = %d\n", i, sum_col(arr, i));
	}
}

int sum_col(int a[][5], int n) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += a[i][n];
	}
	return sum;
}

int sum_row(int a[][5], int n) {
	int sum = 0;
	for (int j = 0; j < 5; j++) {
		sum += a[n][j];
	}
	return sum;
}