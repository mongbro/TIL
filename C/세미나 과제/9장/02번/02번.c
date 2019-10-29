#include<stdio.h>

void check_alpha(char a);

int main() {
	char a;
	printf("문자를 입력하시오 : ");
	scanf("%c", &a);
	check_alpha(a);
	return 0;
}

void check_alpha(char a) {
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
		printf("%c는 알파벳입니다.", a);
	else
		printf("%c는 알파벳이 아닙다.", a);
}