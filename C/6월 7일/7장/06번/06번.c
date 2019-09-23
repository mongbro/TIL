#include<stdio.h>
int main()
{
	int x, y, result;
	char op;
	printf("**************\n");
	printf("A---Add\n");
	printf("S---Subtrct\n");
	printf("M---Multiply\n");
	printf("D---Divide\n");
	printf("Q---Quit\n");
	printf("**************\n");
	do
	{
		do
		{
			printf("연산을 선택하시오 : ");
			scanf_s("\n%c", &op, 1);
		} while (op != 'A'&&op != 'S'&&op != 'M'&&op != 'D'&&op != 'Q'&&op != 'a'&&op != 's'&&op != 'm'&&op != 'd'&&op != 'q');
		if (op == 'q' || op == 'Q')
			break;
		printf("두 수를 입력하시오 : ");
		scanf_s("%d%d", &x, &y);
		switch (op)
		{
		case 'a':
		case 'A':
			result = x+y;
			break;
		case 's':
		case 'S':
			result = x-y;
			break;
		case 'm':
		case 'M':
			result = x*y;
			break;
		case 'd':
		case 'D':
			result = x/y;
			break;
		}
		printf("%d\n", result);
	} while (1);
	return 0;
}