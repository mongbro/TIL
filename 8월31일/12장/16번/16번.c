#include<stdio.h>
#include<string.h>

void print(char* s, int n);

int main() {
	char s[100] = { 0 };
	int n = 0;

	printf("광고하고 싶은 텍스트를 입력하시오 : ");
	gets_s(s, sizeof(s));
	printf("====================================================================\n");

	for (int i = 0; i < strlen(s); i++) {
		n++;
	}

	print(s, n);
}

void print(char* s, int n) {
	int m = 0;
	for (int i = n; i >= 0; i--) {
		for (int j = m; j < n; j++) {
			printf("%c", s[j]);
		}
		for (int k = 0; k < m;k++) {
			printf("%c", s[k]);
		}
		printf("\n");
		m++;
	}
}