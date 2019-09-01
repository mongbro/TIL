#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	char c;
	char t=0;

	while (1) {
	printf("문자를 입력하시오 : ");
	c = getchar();
	getchar();

		if (c == '.')
			break;
		if (isalpha(c)) {
			if (isupper(c))
				t = tolower(c);
			else if (islower(c))
				t = toupper(c);
			putchar(t);
			putchar('\n');
		}
		else {
			printf("경고!      알파벳이 아닙니다.");
			putchar('\n');
		}
	}
}