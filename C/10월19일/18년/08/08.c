#include<stdio.h>

int is_mul(int n, int m);

int main() {
	int x, y;
	printf("�Է� : ");
	scanf("%d", &x);
	printf("�Է� : ");
	scanf("%d", &y);
	if (is_mul(x, y) == 1)
		printf("%d�� %d�� ����Դϴ�.\n", x, y);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.\n", x, y);
	return 0;
}

int is_mul(int n, int m) {
	if (n % m == 0) return 1;
	else return 0;
}