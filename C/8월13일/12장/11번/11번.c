#include<stdio.h>
#include<string.h>

void reverse(char* str);

int main() {
	char str[100] = { 0 };
	printf("문자열을 입력하시오 : ");
	gets_s(str, sizeof(str));

	reverse(str);

	return 0;
}

void reverse(char* str) {
	char* token;
	char deli[10] = " ,.";
	char revers[100][100];
	int count = 0;

	token = strtok(str, deli);

	for (int i = 0; token != NULL; i++) {
		count++;
		strcpy(revers[i], token);
		token = strtok(NULL, deli);
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%s ", revers[i]);
	}


}