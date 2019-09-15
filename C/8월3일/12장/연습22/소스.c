#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cipher(char* input, char* output);

int main() {
	char input[100];
	char output[100] = { 0 };
	printf("문자열을 입력하시오 : ");			
	scanf("%[^\n]s", input);			//엔터를 제외한 모든 문자를 입력받는다.
	cipher(input, output);
	printf("암호화된 문자열 : %s", output);
	return 0;
}

void cipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {			//문자열이 끝날때까지 반복
		if (input[i] >= 'A' && input[i] <= 'z')			//해당 문자가 아스키코드로 대문자A부터 소문자z 사이에 있을때(알파벳일때)
			output[i] = input[i] + 3;								//해당 문자의 아스키코드+3
		else
			output[i] = input[i];									//알파벳이 아니면 원본문자 그대로 가져온다.
	}
}