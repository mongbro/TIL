#include<stdio.h>

int main() {
	int arr[3][5] = { 12,56,32,16,98,99,56,34,41,3,65,3,87,78,21 };
	int sum;

	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		printf("%d���� �հ� : %d\n", i, sum);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		printf("%d���� �հ� : %d\n", i,sum);
	}
}