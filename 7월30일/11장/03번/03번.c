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
		*(arr + i) = rand();		//*arr + i �� ���� *arr = ��� ��, i = �� *****   *arr + i = ���	***** ����� �ȴ�.
									//*(arr + i) �� ���� ( arr(�ּ�) + i ) �� ������ ���� ����Ű�� �ǹǷ� ������ �ȴ�.
	}
}

/********  ���� �Ʒ��� ������  *******/

//void array_fill(int* arr, int size) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand();
//	}
//}