#include<stdio.h>
#include"mong.h"
int check(int n);

int main()
{
	int pw, result, try = 0;

	while (try<=2)
	{
		printf("비밀번호 : ");
		scanf_s("%d", &pw);
		try++;
		result = check(pw);
		if (result == 1)
			break;
	}
	if (try == 3)
		printf("로그인 시도 횟수 초과");
	if (result == 1)
		printf("로그인 성공");
	return 0;
}