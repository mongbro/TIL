#include<stdio.h>

int main() {
	int input, sum = 0;
	printf("n�� ���� �Է��Ͻÿ� >> ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		sum += i * i;
	}
	printf("��갪�� %d�Դϴ�.", sum);
}