#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s1[100], s2[2][100];
	char* token;
	int len;

	printf("´ë¹®ÀÚ : ");
	scanf("%[^\n]s", s1);

	len = strlen(s1);
	
	for (int i = 0; i < len; i++)
		*(s1 + i) = tolower(*(s1 + i));
	
	token = strtok(s1, " ");
	for (int i = 0; token != NULL; i++) {
		strcpy(s2[i], token);
		token = strtok(NULL, " ");
	}

	printf("%s, %s", s2[1], s2[0]);
}