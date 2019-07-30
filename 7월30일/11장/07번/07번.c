#include<stdio.h>

void arr_add(int* sal, int* bon, int* sum, int size);

int main() {
	int sal[5] = { 150,200,250,150,200 }, bon[5] = { 25,20,15,25,20 };
	int sum[5];
	arr_add(sal, bon, sum, 5);
	printf("월급!! : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sal[i]);
	}
	printf("\n");
	printf("보너스 : ");
	for (int i = 0; i < 5; i++) {
		printf("%03d ", bon[i]);
	}
	printf("\n");
	printf("총합!! : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", sum[i]);
	}
}

void arr_add(int* sal, int* bon, int* sum, int size) {
	for (int i = 0; i < size; i++) {
		*(sum + i) = *(sal + i) + *(bon + i);
	}
}

//3번인가 4번부터 계속 같은 문제만 낸다. 주석은 알아서 잘 대입해서 생각하기