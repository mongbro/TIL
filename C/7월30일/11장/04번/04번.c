#include<stdio.h>

void array_print(int* arr, int size);

int main() {
	int arr[10] = { 1,2,3,4,5 };
	array_print(arr, 10);		//�迭�� �����͸� �Լ����� �����ö��� �׳� �迭�̸��� ���� �� �迭�� ù��° �ּҸ� ������ ����.
								//�� �Լ��� �Ű������� �迭�� �����͸� ������ "arr" �Ǵ� "arr[]"�� ����.
	return 0;
}

void array_print(int* arr, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));			//3���̶� ���� ����
	}
	printf(" }");
}