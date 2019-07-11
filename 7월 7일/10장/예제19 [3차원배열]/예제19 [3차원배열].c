#include<stdio.h>
int main(){
	int arr[3][2][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				arr[i][j][k] = i * 100 + j * 10 + k;
			}
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				printf("arr[%d][%d][%d] = %3d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	return 0;
}