#include<stdio.h>
#include<stdlib.h>

int max_value(int a[][4], int n);			//�ش� ����(��)�� �ִ밪
int min_value(int a[][4], int n);			//�ش� ����(��)�� �ּҰ�

int main() {
	int arr[10][4];
	for (int i = 0; i < 10; i++) {
		for (int j = 0 ; j < 4; j++) {
			arr[i][j] = rand() % 101;		//0������ 100������ ����
		}
	}
	arr[0][0] = 1;							//0���� ��ȣ
	arr[1][0] = 2;							//0���� ��ȣ
	arr[2][0] = 3;							//0���� ��ȣ
	arr[3][0] = 4;							//0���� ��ȣ
	arr[4][0] = 5;							//0���� ��ȣ
	arr[5][0] = 6;							//0���� ��ȣ
	arr[6][0] = 7;							//0���� ��ȣ
	arr[7][0] = 8;							//0���� ��ȣ
	arr[8][0] = 9;							//0���� ��ȣ
	arr[9][0] = 10;							//0���� ��ȣ
	for (int i = 0; i < 10; i++) {
		for (int j=0; j < 4; j++) {
			printf("%2d   ", arr[i][j]);	//�ϴ� �ѹ� ��� ����
		}
		printf("\n");
	}
	for (int i=1;i<4;i++){
		printf("����#%d�� �ִ����� = %d\n", i, max_value(arr, i));
		printf("����#%d�� �ּ����� = %d\n\n", i, min_value(arr, i));
	}
}

int max_value(int a[][4], int n) {
	int max=a[0][n];							//n���� �ʱ� �ִ밪
	for (int i = 0; i < 10; i++) {
		if (a[i][n] > max)
			max = a[i][n];						//n���� �ִ밪
	}
	return max;
}

int min_value(int a[][4], int n) {
	int min = a[0][n];							//n���� �ʱ� �ּҰ�
	for (int i = 0; i < 10; i++) {
		if (a[i][n] < min)
			min = a[i][n];						//n���� �ּҰ�
	}
	return min;
}