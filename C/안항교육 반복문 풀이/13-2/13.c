#include<stdio.h>

int main() {
	int n, r, sum = 1;
	printf("n�� �� >> ");
	scanf("%d", &n);
	printf("r�� �� >> ");
	scanf("%d", &r);

	for (int i = 0; i <= n - (n - r - 1); i++) {
		sum *= n - i;
	}

	printf("������ ���� %d�Դϴ�.", sum);
}