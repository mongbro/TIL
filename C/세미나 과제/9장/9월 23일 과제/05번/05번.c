#include<stdio.h>
#include"mong.h"

int main() {
	int n;
	printf("입력 : ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합 : %d", n, add(n));
}