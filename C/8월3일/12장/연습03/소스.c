#include<stdio.h>
int main() {
	char str[100] = "C language is easy";
	int count = 0;

	while (str[count] != 0) {			//NULL의 아스키 코드값은 0 이다.
		count++;
	}
	printf("문자열 \"%s\"의 길이는 %d입니다.", str, count);
}