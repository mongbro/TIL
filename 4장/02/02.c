#include<stdio.h>
int main()
{
	int input;
	printf("16진수 정수를 입력하시오 : ");
	scanf("%x", &input);
	printf("8진수로는 %#o입니다.\n", input);
	printf("10진수로는 %d입니다.\n", input);
	printf("16진수로는 %#x입니다.", input);
	return 0;
}