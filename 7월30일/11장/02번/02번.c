#include<stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
		   //int�� �Ű����� 2��,,,, int*�� �Ű����� 2��
int main() {
	int x, y, sum, diff;
	int* p_sum = &sum, *p_diff = &diff;
	printf("x�� �Է� : ");
	scanf_s("%d", &x);
	printf("y�� �Է� : ");
	scanf_s("%d", &y);

	get_sum_diff(x, y, p_sum, p_diff);

	printf("�� : %d\n�� : %d", sum, diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;		//sum�� �ּҸ� ã�Ƽ� x + y�� ���� �ִ´�
	*p_diff = x - y;	//diff�� �ּҸ� ã�Ƽ� x - y�� ���� �ִ´�
}