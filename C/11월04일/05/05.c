#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char a;
	while (1) {
		printf("\n문자 입력 : ");
		a = getchar();
		getchar();
		if (a == '.')
		break;
		else if (isalpha(a) == 0) {
			printf("알파벳이 아님!!!!\n");
			continue;
		}
		else if (islower(a)) {
			printf("%c", toupper(a));
			continue;
		}
		else if (isupper(a)) {
			printf("%c", tolower(a));
			continue;
		}
	}
	return 0;
}