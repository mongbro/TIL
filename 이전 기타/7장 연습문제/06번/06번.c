#include<stdio.h>
int main()
{
	char op;
	int x, y, result;
	printf("*****************\nA----Add\nS----Subtract\nM----Multiply\nd----Divide\nQ----Quit\n*****************\n");

	do
	{
		do
		{
			printf("연산을 입력하시오 : ");
			scanf("\n%c", &op);

		} while (op != 'a' && op != 's' && op != 'm' && op != 'd' && op != 'q');

		if (op == 'q')
			break;

		printf("두 수를 공백으로 분리하여 입력하시오 : ");
		scanf_s("%d%d", &x, &y);

		switch (op)
		{
		case 'a':
			result = x + y;
			break;
		case 's':
			result = x - y;
			break;
		case 'm':
			result = x * y;
			break;
		case 'd':
			result = x / y;
			break;
		}

		printf("%d\n", result);
	} while (op != 'q');

	return 0;
}