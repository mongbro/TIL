#include<stdio.h>
#include<string.h>

int str_chr(char* str, char c);

int main() {
	char str[100] = { 0 };
	printf("¹®ÀÚ¿­ : ");
	scanf("%[^\n]s", str);

	for (char a = 'a'; a <= 'z'; a++) {
		printf("%c : %d\n", a, str_chr(str, a));
	}
	return 0;
}

int str_chr(char* str, char c) {
	int n = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c)
			n++;
	}
	return n;
}