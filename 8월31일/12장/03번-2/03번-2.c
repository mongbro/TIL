#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[50];
	char c;

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));
	printf("개수를 셀 문자를 입력하시오 : ");
	scanf("%c", &c);

	printf("%s에서 %c의 개수 : %d", s, c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;

	for (char* p = s; *p != '\0'; p++) {				//포인터형 변수 p를 문자열s의 시작점으로 두고 문자열이 끝나는 지점(\0)까지 반복한다.
		if (*p == c)													//포인터가 가리키는 문자가 c와 같다면
			n++;
	}
	return n;
}