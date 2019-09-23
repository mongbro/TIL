#include<stdio.h>
#include<string.h>
int main() {
	char str1[100];
	char str2[100];
	printf("첫번째 단어 입력");
	scanf_s("%s", str1, sizeof(str1));
	printf("두번째 단어 입력");
	scanf_s("%s", str2, sizeof(str2));
	printf("\n\n");
	if (strcmp(str1, str2) > 0)
		printf("%s가 단어가 사전순서상 앞", str2);
	else if (strcmp(str1, str2) == 0)
		printf("%s와 %s는 같음", str1, str2);
	else
		printf("%s가 단어가 사전순서상 앞", str1);
	printf("\n\n");
}