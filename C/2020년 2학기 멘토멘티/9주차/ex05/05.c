#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char c;
	
	do {
		printf("���� �Է� : ");
		c = getchar();
		getchar();
		if (islower(c))
			c = toupper(c);
		else
			c = tolower(c);
		printf("%c\n", c);
	}while (c != '.');
}