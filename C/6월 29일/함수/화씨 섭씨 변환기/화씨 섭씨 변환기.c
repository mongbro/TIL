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
			printf("�޴����� �����ϼ��� : ");
			scanf_s("\n%c", &a, 1);

		} while (a != 'C' && a != 'c' && a != 'F' && a != 'f' && a != 'Q' && a != 'q');
		if (a == 'q' || a == 'Q')
			break;
		if (a == 'C' || a == 'c' || a == 'F' || a == 'f')
		{
			printf("�µ��� �Է��Ͻÿ� : ");
			scanf_s("%lf", &temp);
		}
		switch (a)
		{
		case 'f':
		case 'F':
			printf("���� %lf�� �Դϴ�.\n\n", f2c(temp));
			break;
		case 'c':
		case 'C':
			printf("ȭ�� %lf�� �Դϴ�.\n\n", c2f(temp));
			break;
		}
	} while (1);
	return 0;
}
void print_option()
{
	printf("*****************�޴�*****************\n");
	printf("ȭ������ ������ ��ȯ : 'f'\n");
	printf("�������� ȭ���� ��ȯ : 'c'\n");
	printf("���� : 'q'\n");
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