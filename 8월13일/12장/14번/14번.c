#include<stdio.h>
#include<string.h>

void change(char* str, char* find);

int main() {
	char str[300] = { 0 };				//문장
	char find[100] = { 0 };			//찾을 단어

	printf("문자열을 입력하시오 : ");
	gets_s(str, sizeof(str));
	printf("찾을 문자열 : ");
	gets_s(find, sizeof(find));

	change(str, find);

	return 0;
}

void change(char* str, char* find) {
	char chan[100] = { 0 };			//바꿀 단어
	char* token;

	printf("바꿀 문자열 : ");
	gets_s(chan, sizeof(chan));

	token = strtok(str, " ");
	for (int i = 0; token != NULL; i++) {
		if (strcmp(find, token) == 0)			//찾는 단어와 같은 토큰이 있을경우
			token = chan;									//그 토큰을 바꾸는 단어로 바꾼다.
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
}