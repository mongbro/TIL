#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100];
	int len;

	printf("string input : ");
	scanf("%[^\n]s", s);

	len = strlen(s);
	printf("================================================\n");

	for (int i = 0; i < 10; i++) {
		for (int j = i; j - i < len; j++) {
			if (j >= len)
				printf("%c", *(s + j - len));
			else
				printf("%c", *(s + j));
		}
		printf("\n");
	}
}