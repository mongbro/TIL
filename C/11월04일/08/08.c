#include<stdio.h>
#include<string.h>

int main() {
	char str[200] = { 0 };
	int count = 0;
	char* token;

	printf("���ڿ� : ");
	scanf("%[^\n]s", str);

	token = strtok(str, " ,.\n");
	for (; token != NULL;) {
		count++;
		token = strtok(NULL, " ,.\n");
	}
	printf("�ܾ��� �� : %d", count);
}