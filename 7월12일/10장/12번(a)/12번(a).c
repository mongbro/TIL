#include<stdio.h>

void scalar_mult(int a[][3], int scalar);

int main() {
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };		//���� ���

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d  ", arr[i][j]);			//���� ��� �ѹ� �������
		}
		printf("\n");
	}
	printf("\n\n");
	scalar_mult(arr, 2);						//����� ��Į�� ���� ���
	return 0;
}

void scalar_mult(int a[][3], int scalar) {
	for (int i = 0; i < 3; i++) {
		for(int j=0;j<3;j++){
			printf("%2d  ", a[i][j] * 2);		//�� ���ҿ� 2�� ���Ѱ��� ����Ѵ�.
		}
		printf("\n");
	}
}