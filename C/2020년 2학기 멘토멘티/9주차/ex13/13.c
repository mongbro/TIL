#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100];
	int len, count = 0;

	printf("string input : ");
	scanf("%[^\n]s", s);

	len = strlen(s);

	for (int i = 0; i < len; i++) {
		if (ispunct(*(s + i)))
			count++;
	}
	printf("±¸µÎÁ¡ : %d", count);
}