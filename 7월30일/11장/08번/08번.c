#include<stdio.h>

int arr_sum(int* sal, int size);

int main() {
	int sal[5] = { 150,200,250,150,200 };
	printf("���� ���� : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sal[i]);
	}
	printf("\n");
	printf("�ӱ� �Ѿ� : %d", arr_sum(sal, 5));
	return 0;
}

int arr_sum(int* sal, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(sal + i);
	}
	return sum;
}

//�̰͵� ���� �ּ� ����