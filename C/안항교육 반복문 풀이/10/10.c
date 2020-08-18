#include<stdio.h>

int main() {
	double r, result = 1;
	int n;
	printf("실수의 값을 입력하세요 >> ");
	scanf("%lf", &r);
	printf("거듭제곱 횟수를 입력하세요 >> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result *= r;
	}
	printf("결과값은 %lf", result);
}