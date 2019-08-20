#include<stdio.h>
#include<string.h>
#include<ctype.h>

void check_first(char* str);
void check_last(char* str);

int main() {
	char str[100] = { 0 };

	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", str);

	check_first(str);
	check_last(str);
	printf("수정된 텍스트 : %s", str);
	return 0;
}

void check_first(char* str) {
	if (islower(str[0]))
		str[0] = toupper(str[0]);
}

void check_last(char* str) {
	if (str[strlen(str) - 1] != '.')
		strcat(str, ".");				//strcat의 매개변수는 (원본문자열, 추가할 문자열) 이므로 s2에는 문자 '.' 이 아니라 문자열 "." 을 넣어야한다.
}