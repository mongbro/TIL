#include<stdio.h>
#include"mong.h"

int main() {
	int n;
	printf("�Է� : ");
	scanf("%d", &n);
	printf("1���� %d������ �� : %d", n, add(n));
}