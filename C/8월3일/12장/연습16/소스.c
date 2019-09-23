#include<stdio.h>
#include<stdlib.h>
int main() {
	char str1[] = "100";			//100이라는 숫자를 문자열에 저장
	char str2[] = "12.93";		//12.93이라는 숫자를 문자열에 저장
	char buffer[100];				//결과값의 숫자를 저장할 문자열
	int i;									//str1 문자열을 정수형으로 바꾸어 저장할 변수
	double d, result;				//str2 문자열을 실수형으로 바꾸어 저장할 변수, 두 수의 합

	i = atoi(str1);						//str1문자열을 정수형으로 바꾸어 i에 저장
	d = atof(str2);					//str2문자열을 실수형으로 바꾸어 d에 저장
	result = i + d;

	sprintf(buffer, "%f", result);			//실수형 result를 buffer문자열에 저장
	printf("연산결과 : %s", buffer);		//문자열buffer 출력
	return 0;
}