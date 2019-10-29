#include<stdio.h>
int absolute(int n);

int main() {
	int n;
	printf("input : ");
	scanf("%d", &n);
	printf("%d의 절대값 : %d", n, absolute(n));
	return 0;
}

int absolute(int n) {
	return n >= 0 ? n : -n;
}