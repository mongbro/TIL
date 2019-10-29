#include<stdio.h>

int Isdigit(char ch);

int main() {
	char ch;

	printf("입력 : ");
	scanf("%c", &ch);

	if (Isdigit(ch) == 1)
		printf("숫자");
	else
		printf("숫자x");

	return 0;
}

int Isdigit(char ch) {
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}