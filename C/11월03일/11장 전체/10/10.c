#include<stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main() {
	int x, y, lcm, gcd;
	int* p_lcm = &lcm, * p_gcd = &gcd;
	printf("x�Է� : ");
	scanf("%d", &x);
	printf("y�Է� : ");
	scanf("%d", &y);
	get_lcm_gcd(x, y, p_lcm, p_gcd);
	printf("�ּҰ���� : %d\n�ִ����� : %d", lcm, gcd);
	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	int a, b=x*y;
	while (x) {
		if (x < y) {
			a = x;
			x = y;
			y = a;
		}
		x = x - y;
	}
	*(p_gcd) = y;
	*(p_lcm) = b / y;
}