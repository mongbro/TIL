#include<stdio.h>
int main()
{
	double ang, dis, r;
	const double PIE = 3.14;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &dis);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &ang);

	r = 360 / ang / PIE * dis / 2.0;

	printf("������ �������� %lf�Դϴ�.", r);
	return 0;
}