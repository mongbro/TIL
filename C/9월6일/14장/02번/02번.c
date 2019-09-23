#include<stdio.h>
#include"mong.h"
#define SIZE 6

int main() {
	int array[3][6] = { 10,10,10,10,10,10,10,10,10,10, 10,10,10,10,10,10,10,10 };
	int sum = 0;
	for (int i = 0; i < 3; i++){
		sum += get_sum(array[i], SIZE);
	}

	printf("정수의 합 = %d", sum);
}

