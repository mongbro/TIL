#include<stdio.h>

int is_miltiple(int n, int m);

int main() {
	int n, m, result;
	printf("첫번째 정수를 입력 : ");
	scanf("%d", &n);
	printf("두번째 정수를 입력 : ");
	scanf("%d", &m);
	result = is_miltiple(n, m);
	if (result == 1)
		printf("%d는 %d의 배수입니다.", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.", n, m);

	return 0;
}

int is_miltiple(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}