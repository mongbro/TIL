#include<stdio.h>
int get_integer();
void prime_num(int x);
int main()
{
	int x = get_integer();
	prime_num(x);
}
int get_integer()
{
	int x;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	return x;
}
void prime_num(int x)
{
	int n = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			n++;
		if (n > 2)
			break;
	}
	if (n == 2)
		printf("소수입니다.");
	else
		printf("소수가 아닙니다.");
}