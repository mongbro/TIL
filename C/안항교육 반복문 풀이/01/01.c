#include<stdio.h>

int main() {
	int input;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� >> ");
	scanf("%d", &input);

	for (int i = input; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\a");
}