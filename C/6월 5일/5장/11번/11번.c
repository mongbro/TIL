#include<stdio.h>
int main()
{
	double dis, ang, r;
	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &dis);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &ang);
	r = 360 / ang * dis / 2 / 3.14;
	printf("������ �������� %lf�Դϴ�.", r);
	return 0;
}