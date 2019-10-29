#include<stdio.h>
#include"mong.h"

int main() {
	printf("fibo(0) = 0\n");
	printf("fibo(1) = 1\n");
	for (int i = 2; i < 10; i++) {
		printf("fibo(%d) = %d\n", i, fibo(i));
	}
}