#include<stdio.h>

int IsDigit(char ch);

int main() {
	char ch;

	scanf("%c", &ch);
	if (IsDigit(ch) == 1)
		printf("����");
	else
		printf("�����");
	return 0;
}

int IsDigit(char ch) {
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}