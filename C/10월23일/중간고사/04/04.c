#include<stdio.h>

int show_digit(int x);

int main() {
	int n;
	printf("ют╥б  > ");
	scanf("%d", &n);
	show_digit(n);
	return 0;
}

int show_digit(int x) {
	if (x / 10 >= 10)show_digit(x / 10);
	printf("%d ", x % 10);
}