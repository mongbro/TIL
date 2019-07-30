#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void array_fill(int* arr, int size);

int main() {
	int arr[SIZE];
	array_fill(arr, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

void array_fill(int* arr, int size) {
	for (int i = 0; i < SIZE; i++) {
		*(arr + i) = rand();		//*arr + i 로 쓰면 *arr = 어느 값, i = 값 *****   *arr + i = 상수	***** 상수가 된다.
									//*(arr + i) 로 쓰면 ( arr(주소) + i ) 의 포인터 값을 가리키게 되므로 변수가 된다.
	}
}

/********  위랑 아래랑 같은말  *******/

//void array_fill(int* arr, int size) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand();
//	}
//}