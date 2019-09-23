#include<stdio.h>

void get_lcm(int x, int y, int* p_lcm, int* p_gcd);

int main() {
	int x, y, lcm, gcd;
	int* p_lcm = &lcm, * p_gcd = &gcd;
	
	printf("�� ���� ������ �Է� : ");
	scanf_s("%d%d", &x, &y);
	
	get_lcm(x, y, p_lcm, p_gcd);
	printf("�ּҰ���� : %d\n�ִ����� : %d", gcd, lcm);
	return 0;
}

void get_lcm(int x, int y, int* p_lcm, int* p_gcd) {
	int r, mul = x * y;
	while (y != 0) {		//�ִ������� ã�� ���(��Ŭ���� �˰��� OR �ִ����� �˰���)
		r = x % y;
		x = y;
		y = r;
	}
	*p_lcm = x;
	*p_gcd = mul / (*p_lcm);	//�ּҰ���� ã�� ���
}