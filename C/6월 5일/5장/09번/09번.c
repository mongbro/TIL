#include<stdio.h>
int main()
{
	double stick_h, stick_s, pira_h, pira_s;
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &stick_h);
	printf("�������� �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &stick_s);
	printf("�Ƕ�̵������ �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * stick_h / stick_s;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", pira_h);
	return 0;
}