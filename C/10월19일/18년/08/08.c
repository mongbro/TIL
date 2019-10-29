#include<stdio.h>

int is_mul(int n, int m);

int main() {
	int x, y;
	printf("입력 : ");
	scanf("%d", &x);
	printf("입력 : ");
	scanf("%d", &y);
	if (is_mul(x, y) == 1)
		printf("%d는 %d의 배수입니다.\n", x, y);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", x, y);
	return 0;
}

int is_mul(int n, int m) {
	if (n % m == 0) return 1;
	else return 0;
}