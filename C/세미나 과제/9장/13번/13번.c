#include<stdio.h>

int is_miltiple(int n, int m);

int main() {
	int n, m, result;
	printf("ù��° ������ �Է� : ");
	scanf("%d", &n);
	printf("�ι�° ������ �Է� : ");
	scanf("%d", &m);
	result = is_miltiple(n, m);
	if (result == 1)
		printf("%d�� %d�� ����Դϴ�.", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);

	return 0;
}

int is_miltiple(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}