#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("막대의 높이를 입력하시오(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)								//i가 n이랑 같은 수가 될때까지의 갯수만큼 *을 찍는다.
			printf("*");
		printf("\n");
	} while (n != -1);												//종료조건 : n이 -1일때
	return 0;														//while문을 무한루프로 만들고 루프문 조건식에 break문을 넣어서 탈출하는 방법도 있다.
}