#include<stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main() {
	int x, y, sum, diff;
	int* p_sum, * p_diff;
	p_sum = &sum;
	p_diff = &diff;

	printf("두 수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	get_sum_diff(x, y, &p_sum, &p_diff);

	printf("원소들의 합 : %d\n", p_sum);
	printf("원소들의 차 : %d\n", p_diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}