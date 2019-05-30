/*int형 정수를 비트연산자를 사용하여 2의보수로 변환하는 프로그램*/
#include<stdio.h>
void main()
{
	int x, C2;
	printf("정수를입력하시오:");
	scanf("%d", &x);

	C2 = 1 + ~x;

	printf("2의 보수 : %d", C2);
	return 0;
}