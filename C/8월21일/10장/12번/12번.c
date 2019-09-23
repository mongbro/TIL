#include<stdio.h>

int main() {
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
	int scalar;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("상수를 입력하시오 : ");
	scanf("%d", &scalar);
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] *= scalar;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}