#include<stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size);		//���� �˻� �Լ�
void print_arr(int a[], int b[], int size);			//�迭 ��� �Լ�

int main() {
	int result;
	int arr1[SIZE] = { 1,2,3 };			//1,2,3,0,0,0,0,...
	int arr2[SIZE] = { 0 };				//0,0,0,0,0,0,0,...
	print_arr(arr1, arr2, SIZE);
	result = array_equal(arr1, arr2, SIZE);
	if (result == 1)
		printf("2���� �迭�� ���� �迭");
	else
		printf("2���� �迭�� �ٸ�");
}

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] == b[i])
			break;			//������ �ε����� �߿� ���� ���� ������ 1��ȯ
		else
			return 0;		//������ 0��ȯ
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