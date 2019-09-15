#include<stdio.h>

int main() {
	int a[3][5] = { 12,56,32,16,98,99,56,34,41,3,65,3,87,78,21 };
	int sum;
	
	for (int i = 0; i < 3; i++) {
		sum = 0;
		int j=0;
		for (; j < 5; j++) {
			sum += a[i][j];
		}
		printf("%d행의 합계 : %d\n", i, sum);
	}

	for (int i = 0; i < 5; i++) {
		sum = 0;
		int j=0;
		for (; j < 3; j++) {
			sum += a[j][i];
		}
		printf("%d열의 합계 : %d\n", i, sum);
	}
	return 0;
}