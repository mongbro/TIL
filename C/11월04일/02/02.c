#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };
	char* token;
	scanf("%[^\n]s", str);
	token = strtok(str, ",.\n ");
	for (; token != NULL;) {
		printf(token);
		token = strtok(NULL, ",.\n ");
	}
	return 0;
}