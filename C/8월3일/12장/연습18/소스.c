#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count_word(char* s);
int main() {
	char str[100];
	printf("문자를 입력하시오 : ");
	scanf("%[^\n]s", str);									//" %[^\n]s " 엔터키를 제외하고 모두 받는다.     그냥 %s로 쓰면 공백에서 끊어진다.***********************
	printf("%s는 %d개의 단어입니다.\n", str, count_word(str));
	return 0;
}

int count_word(char* s) {
	int wc = 0, waiting=1;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	}
	return wc;
}