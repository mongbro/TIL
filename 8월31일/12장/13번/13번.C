#include<stdio.h>
#include<string.h>


int main() {
	char s[100] = { 0 };
	int n = 0;

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '.' || s[i] == ',')
			n++;
	}

	printf("구두점의 개수는 %d입니다.", n);

	return 0;
}