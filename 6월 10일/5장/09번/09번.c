#include<stdio.h>
int main()
{
	double stick_s, stick_h, pira_s, pira_h;
	printf("������ ���� : ");
	scanf_s("%lf", &stick_h);
	printf("������ �׸��� : ");
	scanf_s("%lf", &stick_s);
	printf("�Ƕ�̵� �׸��� : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * stick_h / stick_s;
	printf("�Ƕ�̵� ���� : %lf", pira_h);
	return 0;
}