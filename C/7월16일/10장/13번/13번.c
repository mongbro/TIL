#include<stdio.h>

int main() {
	int binary[32], n, count = 0;	//count�� n�� 2�� ���� Ƚ��, 2������ �ڸ����� �ǹ��Ѵ�.
	printf("�Է� : ");
	scanf_s("%d", &n);
	printf("%d -> ", n);
	for (int i = 0; i < 32 && n > 0; i++) {
		binary[i] = n % 2;		//�迭���� �� �ڸ����� 2������ ��, �� 2�� ���� ������ 0 �Ǵ� 1�� ����.
		n /= 2;		
		count++;
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	return 0;
}