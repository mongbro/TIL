#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main() {
	int c;
	while ((c=getch()) != 'z') {
		printf("-------------\n");
		printf("isdigit = %d\n", isdigit(c));
		printf("isalpha = %d\n", isalpha(c));
		printf("isxdigit = %d\n", isxdigit(c));
		printf("ispunct = %d\n", ispunct(c));
		printf("-------------\n\n");
	}
	return 0;
}