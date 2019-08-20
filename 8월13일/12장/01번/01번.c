#include<stdio.h>
int main() {
	char input;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &input);
	printf("아스키코드값 : %d", input);
	return 0;
}