#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char input[100];
	char output[100] = { 0 };	
	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", input);			//엔터를 제외한 모든 문자를 입력받는다.			문자열은 포인터 -> &필요 ㄴㄴ

	for (int i = 0; input[i] != NULL; i++) {		//문자열이 끝날때까지 반복
		if (isalpha(input[i]))									//해당 문자가 알파벳일때
			output[i] = input[i] + 3;							//해당 알파벳의 아스키코드+3
		else
			output[i] = input[i];								//알파벳이 아니면 원본문자 그대로 가져오기
	}
	printf("암호화된 문자열 : %s", output);
	return 0;
}