#include<stdio.h>

void search(int* sal, int size);

int main() {
	int sal[5] = { 150,200,250,150,200 };
	printf("��� ��ȣ :  %d   %d   %d   %d   %d\n", 1, 2, 3, 4, 5);
	printf("��� ���� : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sal[i]);
	}
	printf("\n������ 200������ ��� : ");
	search(sal, 5);
}

void search(int* sal, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (*(sal + i) == 200)
			printf("%d ", i + 1);
	}
}