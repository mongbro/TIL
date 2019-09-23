#include<stdio.h>
#include<ctype.h>
int main() {
	char c=0;

	while (c != '.') {
		printf("문자를 입력하시오 : ");
		c = getchar();
		getchar();			//scanf("\n%c")에서 \n의 역활

		if (isupper(c)) {		//대문자라면
			c = tolower(c);		//소문자로
			putchar(c);
		}
		else if (islower(c)) {		//소문자라면
			c = toupper(c);			//대문자로
			putchar(c);
		}
		printf("\n");
	}
}