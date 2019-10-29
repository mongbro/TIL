#include<stdio.h>

int main() {
	int arr[10][3], input;
	for (int i = 0; i < 10; i++) {
		arr[i][0] = i + 1;
		arr[i][1] = arr[i][0] * arr[i][0];
		arr[i][2] = arr[i][0] * arr[i][0] * arr[i][0];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("입력 : ");
	scanf("%d", &input);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			if (input == arr[i][j])
				printf("%d의 세제곱근은 %d", input, arr[i][0]);
		}
	}
}