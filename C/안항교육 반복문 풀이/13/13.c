#include<stdio.h>

int main() {
	int n, r, sum = 1, count = 0;
	printf("n�� �� >> ");
	scanf("%d", &n);
	printf("r�� �� >> ");
	scanf("%d", &r);
	
	for (int i = n; i >= n - r - 1; i--) {
		sum *= n - count;
		count++;
	}

	printf("������ ���� %d�Դϴ�.", sum);
}