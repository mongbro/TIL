#include<stdio.h>

int IsDigit(char ch);

int main() {
	char ch;

	scanf("%c", &ch);
	if (IsDigit(ch) == 1)
		printf("숫자");
	else
		printf("노숫자");
	return 0;
}

int IsDigit(char ch) {
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}