#include<stdio.h>

int round(double f);

int main() {
	double f;
	printf("�Ǽ��� �Է� : ");
	scanf("%lf", &f);
	printf("�ݿø��� ���� %d�Դϴ�.", round(f));

	return 0;
}

int round(double f) {
	return (int)(f + 0.5);
}