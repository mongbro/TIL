#include<stdio.h>

void array_print(int* arr, int size);

int main() {
	int arr[10] = { 1,2,3,4,5 };
	array_print(arr, 10);		//배열의 포인터를 함수에서 가져올때는 그냥 배열이름을 쓰면 그 배열의 첫번째 주소를 가지고 간다.
								//즉 함수의 매개변수로 배열의 포인터를 쓸때는 "arr" 또는 "arr[]"로 쓴다.
	return 0;
}

void array_print(int* arr, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));			//3번이랑 같은 원리
	}
	printf(" }");
}