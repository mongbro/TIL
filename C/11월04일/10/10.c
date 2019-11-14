#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[200] = { 0 };
	printf("문자열 입력 : ");
	scanf("%[^\n]s", str);
	for (int i = 0; i < strlen(str); i++)
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	for (int i = 0; i < strlen(str)/2; i++) {
		if (str[i] != str[strlen(str) - 1 - i]) {
			printf("회문이 아닙니다.\n");
			return 0;
		}
	}
	printf("회문입니다.\n");
	return 0;
}