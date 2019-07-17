#include<stdio.h>

void scalar_mult(int a[][3], int scalar);

int main() {
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };		//원래 행렬

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d  ", arr[i][j]);			//원래 행렬 한번 찍어주자
		}
		printf("\n");
	}
	printf("\n\n");
	scalar_mult(arr, 2);						//행렬의 스칼라 곱셈 결과
	return 0;
}

void scalar_mult(int a[][3], int scalar) {
	for (int i = 0; i < 3; i++) {
		for(int j=0;j<3;j++){
			printf("%2d  ", a[i][j] * 2);		//각 원소에 2씩 곱한것을 출력한다.
		}
		printf("\n");
	}
}