#include<stdio.h>
int main()
{
	double stick_L, stick_S, pira_H, pira_S;
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &stick_L);
	printf("�������� �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &stick_S);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &pira_S);

	pira_H = pira_S * stick_L / stick_S;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", pira_H);
	return 0;
}