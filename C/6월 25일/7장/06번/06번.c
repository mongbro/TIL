#include<stdio.h>
void print_star()
{
	printf("************************\n");
}
int main()
{
	int x, y, result;
	char op;
	print_star();
	printf("A---Add\n");
	printf("S---Subtract\n");
	printf("M---Multiply\n");
	printf("D---Divide\n");
	printf("Q---Quit\n");
	print_star();
	do
	{
		do
		{
			printf("연산을 선택하시오 : ");
			scanf_s("\n%c", &op, 1);
		} while (op != 'a'&&op != 's'&&op != 'm'&&op != 'd'&&op != 'q'&&op != 'A'&&op != 'S'&&op != 'M'&&op != 'D'&&op != 'Q');
		if (op == 'q' || op == 'Q')
			break;
		printf("두 수를 공백으로 분리하여 입력하시오 : ");
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
		printf("결과 : %d\n", result);
		print_star();
	} while (1);
	return 0;
}