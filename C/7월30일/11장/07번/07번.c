#include<stdio.h>

void arr_add(int* sal, int* bon, int* sum, int size);

int main() {
	int sal[5] = { 150,200,250,150,200 }, bon[5] = { 25,20,15,25,20 };
	int sum[5];
	arr_add(sal, bon, sum, 5);
	printf("����!! : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sal[i]);
	}
	printf("\n");
	printf("���ʽ� : ");
	for (int i = 0; i < 5; i++) {
		printf("%03d ", bon[i]);
	}
	printf("\n");
	printf("����!! : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sum[i]);
	}
}

void arr_add(int* sal, int* bon, int* sum, int size) {
	for (int i = 0; i < size; i++) {
		*(sum + i) = *(sal + i) + *(bon + i);
	}
}

//3���ΰ� 4������ ��� ���� ������ ����. �ּ��� �˾Ƽ� �� �����ؼ� �����ϱ�