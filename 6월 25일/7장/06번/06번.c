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
			printf("������ �����Ͻÿ� : ");
			scanf_s("\n%c", &op, 1);
		} while (op != 'a'&&op != 's'&&op != 'm'&&op != 'd'&&op != 'q'&&op != 'A'&&op != 'S'&&op != 'M'&&op != 'D'&&op != 'Q');
		if (op == 'q' || op == 'Q')
			break;
		printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
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
		printf("��� : %d\n", result);
		print_star();
	} while (1);
	return 0;
}