#include<stdio.h>
#include<string.h>

int check(char* str);

int main() {
	char str[100];

	printf("문자열을 입력하시오 : ");
	gets_s(str, sizeof(str));

	printf("구두점의 개수는 %d입니다.", check(str));

	return 0;
}

int check(char* str) {
	int count = 0;

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == '.' || str[i] == ',')
			count++;
	}
	return count;
}