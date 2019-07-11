#include<stdio.h>

int main() {
	int arr[][5] = { 0,1,2,3,4,10,11,12,13,14 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
	return 0;
}