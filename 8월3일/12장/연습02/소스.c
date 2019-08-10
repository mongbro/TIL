#include<stdio.h>

int main() {
	char str1[] = "The worst things to eat before you sleep\0";
	char str2[100];
	int n = 0;
	for (int i = 0; i < 100; i++) {		//str1을 str2로 복사
		str2[i] = str1[i];
	}
	printf("원본 문자열 : ");
	printf(str1);						//문자열 출력법1
	printf("\n복사 문자열 : ");
	while (str2[n] != '\0') {
		printf("%c", str2[n]);			//문자열 출력법2
		n++;
	}
}