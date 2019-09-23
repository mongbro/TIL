#include<stdio.h>
#include<string.h>
#include<ctype.h>

int get_response(char* prompt);

int main() {
	char prompt[10];
	int result;

	printf("진행? ");
	scanf("%s", prompt);

	result = get_response(prompt);

	if (result == 1)
		printf("긍정적인 답변");
	else if (result == 0)
		printf("부정적인 답변");
	else
		printf("알수없음");

	return 0;
}

int get_response(char* prompt) {
	char posi[2][10] = { "yes", "ok" };
	char naga[10] = "no";				//10칸 메모리 안에 n	o \0	    x	x	x	x	x	x	x  10개가 들어있어서 나머지 초기화가 안된다고 나온다(x = 쓰레기값)

	for (int i = 0; prompt[i] != NULL; i++) {
		if (isupper(prompt[i]))
			prompt[i] = tolower(prompt[i]);			//전부 소문자로 바꾸기
	}

	if (strcmp(prompt, posi[0]) == 0 || strcmp(prompt, posi[1]) == 0)
		return 1;
	else if (strcmp(prompt, naga) == 0)
		return 0;
	else
		return 2;
}