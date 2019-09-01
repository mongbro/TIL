#include<stdio.h>
#include<string.h>

void reverse(char* s);

int main() {
	char s[100];

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	reverse(s);
}

void reverse(char* s) {
	char* token;
	char seps[] = " .,\n";
	char c[20][20] = { 0 };
	int n = 0;

	token = strtok(s, seps);

	for (int i = 0; token != NULL; i++) {
		strcpy(c[i], token);
		token = strtok(NULL, seps);
		n++;
	}

	for (; n >= 0; n--) {
		printf("%s ", c[n]);
	}
}