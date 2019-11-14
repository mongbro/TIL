#include<stdio.h>
#include<string.h>

int main() {
	char str[200] = { 0 };
	char* word[100];
	char* token;
	char seps[] = " ,.\n";
	int count = 0;

	printf("문자열 입력 : ");
	scanf("%[^\n]s", str);

	token = strtok(str, seps);
	for (int i=0; token != NULL;i++) {
		word[i] = token;
		token = strtok(NULL, seps);
		count++;
	}

	for (int i = 0; i <count; i++) {
		printf("%s ", word[count-i-1]);
	}

	return 0;
}