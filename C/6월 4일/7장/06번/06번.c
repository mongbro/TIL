#include<stdio.h>
int main()
{
	int x, y, result;
	char a;
	printf("*************************\n");
	printf("A---Add\n");
	printf("S---Subtract\n");
	printf("M---Multiply\n");
	printf("D---Divide\n");
	printf("Q---Quit\n");
	printf("*************************\n");
	do
	{
		while (1)
		{
			printf("연산을 선택하시오 : ");
			scanf_s("\n%c", &a, 1);
			if (a == 'a' || a == 'A' || a == 's' || a == 'S' || a == 'm' || a == 'M' || a == 'D' || a == 'd' || a == 'q' || a == 'Q')
				break;
		}

		if (a == 'q' || a == 'Q')
			break;

		printf("두 수를 공백으로 분리하여 입력하시오 : ");
		scanf_s("%d%d", &x, &y);

		switch (a)
		{
		case'a':
		case'A':
			result = x + y;
			break;
		case's':
		case'S':
			result = x - y;
			break;
		case'm':
		case'M':
			result = x * y;
			break;
		case'd':
		case'D':
			result = x / y;
			break;
		}
		printf("결과 : %d\n", result);
	} while (1);
}