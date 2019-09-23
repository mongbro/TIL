/*몇사분면인지*/

#include<stdio.h>
int main()
{
	int x, y;
	printf("(x, y)의 좌표를 입력하시오 : ");
	scanf_s("%d%d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1사분면");
		else
			printf("4사분면");
	else if (y > 0)
		printf("2사분면");
	else
		printf("3사분면");

	return 0;
}