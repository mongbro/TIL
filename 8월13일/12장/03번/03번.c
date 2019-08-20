#include<stdio.h>
#include<string.h>

int str_chr(char* str, char c);

int main() {
	char str[100] = { 0 };
	char c;

	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", str);

	printf("개수를 셀 문자를 입력하시오 : ");
	scanf("\n%c", &c);
	
	printf("%c의 개수 : %d", c, str_chr(str, c));
}

int str_chr(char* str, char c) {
	int n=0;

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == c)
			n++;
	}
	return n;
}