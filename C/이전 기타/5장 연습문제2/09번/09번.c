#include<stdio.h>
int main()
{
	double sti, s_sti, dis, hight;
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &sti);
	printf("�������� �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &s_sti);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &dis);

	hight = dis * sti / s_sti;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", hight);
	return 0;
}