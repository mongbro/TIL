#include<stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main() {
	int x, y, sum, diff;
	int* p_sum=&sum, * p_diff=&diff;
	printf("x값 입력 : ");
	scanf("%d", &x);
	printf("y값 입력 : ");
	scanf("%d", &y);
	get_sum_diff(x, y, p_sum, p_diff);
	printf("합  : %d\n차 : %d", *p_sum, *p_diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}