#include<stdio.h>

int main() {
	double r, result = 1;
	int n;
	printf("�Ǽ��� ���� �Է��ϼ��� >> ");
	scanf("%lf", &r);
	printf("�ŵ����� Ƚ���� �Է��ϼ��� >> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result *= r;
	}
	printf("������� %lf", result);
}