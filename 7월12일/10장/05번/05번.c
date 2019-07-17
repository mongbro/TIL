#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int count_num(int a[], int size);		//0~9까지의 갯수를 새로운 배열에 추가하는 함수
void array(int a[], int size);			//본체 배열 난수로 정하기 (100개)
int max_value(int a[],int size);		//빈도수 많은 인덱스 구하는 함수

int main() {
	int arr[SIZE];
	array(arr, SIZE);
	printf("가장 많이 나온 수 : %d", count_num(arr, SIZE));
	return 0;
}

void array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 10;					//원래 배열(100개)에 0부터 9까지의 난수를 대입
	}
}

int count_num(int a[], int size) {
	int arr[10] = { 0 };					//0부터 9까지의 갯수를 저장할 새로운 배열
	for (int i = 0; i < size; i++) {		
		for (int j = 0; j < 10; j++) {
			if (a[i] == j)
				arr[j]++;					//원래 배열의 원소가 0부터 9사이의 n일때 새 배열[n]의 원소 +1 
		}
	}
	return max_value(arr, 10);
}

int max_value(int a[], int size) {
	int max = a[0], max_num;				//max = 가장 큰 수의 원소, max_num = 원소가 가장 큰 새 배열 n
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			max_num = i;
		}
	}
	return max_num;
}