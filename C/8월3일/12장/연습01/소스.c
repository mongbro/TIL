#include<stdio.h>

int main() {
	char str[100];
	int n = 0;
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = 'f';
	str[6] = 'g';
	str[7] = '\0';
	while (str[n] != '\0') {
		printf("%c ", str[n]);
		n++;
	}
}