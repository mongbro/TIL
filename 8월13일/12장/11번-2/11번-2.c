#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	char* token;
	char reverse[100][100] = { 0 };			//2중배열로 만들어서 각각의 토큰을 하나의 배열에 담을것
	int count = 0;											//토큰의 갯수

	printf("문자열을 입력하시오 : ");
	gets_s(str, sizeof(str));							//get_s쓰는 버릇 들이자

	token = strtok(str, " ");
	for (int i = 0; token != NULL; i++) {
		count++;
		strcpy(reverse[i], token);
		token = strtok(NULL, " ");
	}

	for (int i = count; i >= 0; i--) {
		printf("%s ", reverse[i]);
	}

	return 0;
}