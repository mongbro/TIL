#include<stdio.h>

int main() {
	int a[10][3];
	int n;

	for (int i = 0; i < 10; i++) {
		a[i][0] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		a[i][1] = a[i][0] * a[i][0];
	}
	for (int i = 0; i < 10; i++) {
		a[i][2] = a[i][0] * a[i][0] * a[i][0];
	}

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 0; i < 10; i++) {
		if (a[i][2] == n)
			printf("%d의 세제곱근은 %d", n, a[i][0]);
	}

	return 0;
}