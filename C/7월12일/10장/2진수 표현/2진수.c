#include<stdio.h>

void f_binary(int n);

int main() {
	int n;
	printf("ют╥б : ");
	scanf_s("%d", &n);
	f_binary(n);
	return 0;
}

void f_binary(int n) {
	if (n==0||n==1) {
		printf("%d", n);
	}
	else {
		f_binary(n / 2);
		printf("%d", n % 2);
	}
}