#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	char* token;
	char seps[] = " .,\n";
	int n = 0;

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	token = strtok(s, seps);

	for (int i = 0; token != NULL; i++) {
		n++;
		token = strtok(NULL, seps);
	}

	printf("단어의 수는 %d입니다.", n);

	return 0;
}