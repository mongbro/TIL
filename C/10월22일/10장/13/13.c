#include<stdio.h>

int Isdigit(char ch);

int main() {
	char ch;

	printf("�Է� : ");
	scanf("%c", &ch);

	if (Isdigit(ch) == 1)
		printf("����");
	else
		printf("����x");

	return 0;
}

int Isdigit(char ch) {
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}