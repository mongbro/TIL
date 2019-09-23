#include<stdio.h>

void trans(int a[][3]);

int main() {
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d  ", arr[i][j]);			//원래 함수 찍어주자
		}
		printf("\n");
	}
	printf("\n\n");
	trans(arr);
	return 0;
}

void trans(int a[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d  ", a[j][i]);			//자리바꿔서 출력한다.
		}
		printf("\n");
	}
}