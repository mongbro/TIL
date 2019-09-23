#include<stdio.h>
int main() {
	char str1[] = "100 200 300";
	char str2[30];
	double value;
	sscanf_s(str1, " %d", &value);		//value에 수치로 변환해서 넣었다.
	printf("%d\n", value);					//이미 수치로 바뀌어있으니까 정수취급
	sprintf_s(str2, sizeof(str2), "%d", value);		//str2를 value에 넣었다.
	printf("%s\n", str2);											//수치로 변환되지 않았으므로 문자열취급
}