#include<stdio.h>

int main() {
	int input;
	printf("정수를 입력하세요 >> ");
	scanf("%d", &input);

	do {
		printf("%d", input % 10);
		input /= 10;
	} while (input != 0);
}