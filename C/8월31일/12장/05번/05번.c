#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	char c;
	char t=0;

	while (1) {
	printf("���ڸ� �Է��Ͻÿ� : ");
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
			printf("���!      ���ĺ��� �ƴմϴ�.");
			putchar('\n');
		}
	}
}