#include<stdio.h>

void print_arr(int arr[5][5]);

int main() {
	int arr[5][5];
	int n;
	int* p = &arr[0][0];		//p�� arr[0][0]�� �ּ�
	for (int i = 0; i < 5; i++) {
		n = 0;
		for (int j = 0; j < 5; j++) {
			arr[i][j] = n + 10;
			n += 10;
		}
	}
	print_arr(arr);
	printf("\n\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			*p += 10;		//p�ּ��� ������ 10�� ���ض�
			p++;			//p�ּҿ� 1�� ���ض�(0,0 -> 0,1 -> 0,2 -> ... -> 0,5 -> 1,0 -> 1,1 -> ...)
		}
	}
	print_arr(arr);
	return 0;
}

void print_arr(int arr[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
}