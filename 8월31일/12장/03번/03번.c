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

	printf("%d\n", sizeof(s));
	printf("%s에서 %c의 개수 : %d", s, c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;
	for (int i = 0; i< strlen(s); i++) {					//  범위를 sizeof(s) 로 하면 첫번째부터 네번째까지 4개만 읽는다.		포인터변수의 크기가 4바이트이기때문
																				//  원본에서 sizeof(s) 가 50인 것은 원본의 s는 char형 배열이기 때문이다.		여기서는  포인터형 변수이다.
		if (s[i] == c)
			n++;
	}

	return n;
}