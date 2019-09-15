#include<stdio.h>
#include<string.h>

int main() {
	char str[100];				//토크나이징 할거니까 초기화 ㄴㄴ
	char seps[] = " ,.";
	char* token;

	printf("입력 : ");
	scanf("%[^\n]s", str);				//엔터빼고입력 넣어주기 안그러면 공백을 인식하지 못함

	token = strtok(str, seps);

	while (token != NULL) {
		printf("%s", token);
		token = strtok(NULL, seps);
	}
}