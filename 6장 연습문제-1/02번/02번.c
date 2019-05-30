/*약수를 구하는 프로그램*/

#include<stdio.h>
int main()
{
	int input1, input2;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input1);
	printf("정수를 입력하시오 : ");
	scanf("%d", &input2);

	if (input1%input2 == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");

	return 0;
}