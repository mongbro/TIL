#include<stdio.h>
#include<string.h>

int str_chr(char*str, int c);

int main() {
	char str[100] = { 0 };
	int c=0;

	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", str);

	 str_chr(str, c);
}

int str_chr(char*str, int c) {
	char a;
	printf("문자를 입력하시오 : ");
	scanf("\n%c", &a);
	
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == a)
			c++;
	}

	printf("%c의 갯수는 %d", a, c);
}