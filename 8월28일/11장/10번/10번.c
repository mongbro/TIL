#include<stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main() {
	int x, y, lcm, gcd;
	int* p_lcm = &lcm, * p_gcd = &gcd;

	printf("�� ������ �Է� : ");
	scanf("%d %d", &x, &y);
	
	get_lcm_gcd(x, y, p_lcm, p_gcd);

	printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.", lcm, gcd);

	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	int n;
	int a = x, b = y;

	while (a) {
		n = b % a;
		b = a;
		a = n;
	}
	*p_gcd = b;
	*p_lcm = (x * y) / b;
}