#include<stdio.h>

int main() {
	int input;
	printf("������ �Է��ϼ��� >> ");
	scanf("%d", &input);

	do {
		printf("%d", input % 10);
		input /= 10;
	} while (input != 0);
}