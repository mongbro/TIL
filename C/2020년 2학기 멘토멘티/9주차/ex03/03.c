#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[100], c;
	int n;

	printf("���ڿ� �Է� : ");
	scanf("%[^\n]s", s);
	printf("���� �Է� : ");
	scanf(" %c", &c);
	
	n = str_chr(s, c);
	printf("%c : %d", c, n);
}

int str_chr(char* s, int c) {
	int len = strlen(s), count = 0;

	for (int i = 0; i < len; i++) {
		if (*(s + i) == c)
			count++;
	}
	return count;
}