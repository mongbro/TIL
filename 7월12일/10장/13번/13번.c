#include<stdio.h>
#define SIZE 32

int main() {
	int bin[SIZE], n, count = 0;
	printf("�Է� : ");
	scanf_s("%d", &n);
	printf("%d => ", n);
	for (int i = 0; i < 32 && n>0; i++) {
		bin[i] = n % 2;			//0 % 2 == 0 �̰� 1 % 0 == 1 �̴�.
		n /= 2;
		count++;				//n�� 2�� ��� �������ϴ��� ���� ����
	}
	for (int i = count - 1; i >= 0; i--) {		//�迭�� 0���� �����ϹǷ� count���� 1�� ���ְ� �����Ѵ�.
		printf("%d", bin[i]);
	}
	return 0;
}