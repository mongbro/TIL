#include<stdio.h>

int main() {
	int input;
	
	printf("������ �Է��Ͻÿ� >> ");
	scanf("%d", &input);

	printf("��� : ");

	for (int i = 1; i <= input; i++) {
		if (input % i == 0)
			printf("%d ", i);
	}
}