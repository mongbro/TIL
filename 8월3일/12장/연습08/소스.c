#include<stdio.h>
#include<string.h>
int main() {
	char str[100] = "Hello world! ";
	strcat_s(str, sizeof(str), "My name is ");		//strcat의 매개변수는 (원본 문자열, 문자열의 버퍼 크기, 뒷부분의 원본 문자열)
	strcat_s(str, sizeof(str), "Kim JongEun\n\n");	//						str				sizeof(str)			추가부분
	printf(str);
}