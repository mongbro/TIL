#include<stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size);		//동일 검사 함수
void print_arr(int a[], int b[], int size);			//배열 출력 함수

int main() {
	int result;
	int arr1[SIZE] = { 1,2,3 };			//1,2,3,0,0,0,0,...
	int arr2[SIZE] = { 0 };				//0,0,0,0,0,0,0,...
	print_arr(arr1, arr2, SIZE);
	result = array_equal(arr1, arr2, SIZE);
	if (result == 1)
		printf("2개의 배열은 같은 배열");
	else
		printf("2개의 배열은 다름");
}

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] == b[i])
			break;			//동일한 인덱스들 중에 같은 값이 있으면 1반환
		else
			return 0;		//없으면 0반환
	}
	return 1;
}

void print_arr(int a[], int b[], int size) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		printf("\n");
	}
}