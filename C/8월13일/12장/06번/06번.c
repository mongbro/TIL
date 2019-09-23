#include<stdio.h>
#include<ctype.h>

void str_upper(char* str);

int main() {
	char str[100] = { 0 };

	printf("문자열 입력 : ");
	scanf("%[^\n]s", str);

	str_upper(str);

	for (int i = 0; str[i] != NULL; i++) {
		printf("%c", str[i]);
	}
}

void str_upper(char* str) {
	for (int i = 0; str[i] != NULL; i++) {
		if (isalpha(str[i]))
			str[i] = toupper(str[i]);
	}
}