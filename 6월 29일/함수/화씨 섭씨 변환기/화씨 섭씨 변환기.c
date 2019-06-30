#include<stdio.h>
void print_option();
double c2f(double c);
double f2c(double f);
int main()
{
	char a;
	double temp;
	do
	{
		print_option();
		do
		{
			printf("메뉴에서 선택하세요 : ");
			scanf_s("\n%c", &a, 1);

		} while (a != 'C' && a != 'c' && a != 'F' && a != 'f' && a != 'Q' && a != 'q');
		if (a == 'q' || a == 'Q')
			break;
		if (a == 'C' || a == 'c' || a == 'F' || a == 'f')
		{
			printf("온도를 입력하시오 : ");
			scanf_s("%lf", &temp);
		}
		switch (a)
		{
		case 'f':
		case 'F':
			printf("섭씨 %lf도 입니다.\n\n", f2c(temp));
			break;
		case 'c':
		case 'C':
			printf("화씨 %lf도 입니다.\n\n", c2f(temp));
			break;
		}
	} while (1);
	return 0;
}
void print_option()
{
	printf("*****************메뉴*****************\n");
	printf("화씨에서 섭씨로 변환 : 'f'\n");
	printf("섭씨에서 화씨로 변환 : 'c'\n");
	printf("종료 : 'q'\n");
	printf("--------------------------------------\n");
}
double c2f(double c)
{
	double f;
	f = c / 5.0 * 9 + 32;
	return f;
}
double f2c(double f)
{
	double c;
	c = 5 / 9.0*(f - 32.0);
	return c;
}