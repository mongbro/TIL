#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_alpha(char a);

int main() {
	char c;

	printf("입력 : ");
	scanf("%c", &c);

	if (check_alpha(c))
		printf("%c는 알파벳입니다.", c);
	else
		printf("%c는 알파벳이 아닙니다.", c);
}

int check_alpha(char a) {
	for (int i = 0; i < 28; i++) {
		if (a == 'a' + i)
			return 1;
	}
	return 0;
}