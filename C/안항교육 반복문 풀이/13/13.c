#include<stdio.h>

int main() {
	int n, r, sum = 1, count = 0;
	printf("n의 값 >> ");
	scanf("%d", &n);
	printf("r의 값 >> ");
	scanf("%d", &r);
	
	for (int i = n; i >= n - r - 1; i--) {
		sum *= n - count;
		count++;
	}

	printf("순열의 값은 %d입니다.", sum);
}