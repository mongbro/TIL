#include<stdio.h>
int main()
{
	int n;

	printf("막대의 높이(종료 : -1) : ");				//이거를 따로 써준 이유는 do~while문으로 쓰면 처음 시작하는 줄이 공백이고 다음줄부터 출력되기때문
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++)
		printf("*");

	while (n != -1)										//n이 -1일때 프로그램 종료
	{
		printf("\n막대의 높이(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int j = 1; j <= n; j++)					//n의 횟수만큼 *을 출력
			printf("*");
	}
	return 0;
}