#include<stdio.h>
#define PIE 3.14
int main()
{
	int dis;
	double ang, r;
	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &dis);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &ang);
	r = 360 / ang * dis / 2 / PIE;
	printf("������ �������� %lf�Դϴ�.", r);
	return 0;
}