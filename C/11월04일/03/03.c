#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[100] = { 0 };
	char c;
	printf("문자열 : ");
	scanf("%[^\n]s", s);
	printf("문자 : ");
	scanf("\n%c", &c);
	printf("%d", str_chr(s, c));
	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i]==c)
			n++;
	}
	return n;
}