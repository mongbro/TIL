#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	char arr[15][15];				//15 * 15 �࿭
	int n, rand_num, count = 0;		//n = ������ ��� �̵� �Ұ���
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = '.';		//�� �迭�� �ʱⰪ : .
		}
	}
	arr[7][7] = '*';				//�߾ӿ� �ִ� 7�� 7���� �ʱⰪ : *
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("�Է� : ");
	scanf_s("%d", &n);
	srand((unsigned)time(NULL));
	while (count <= n) {
		rand_num = rand() % 8;
		
		count++
	}
}