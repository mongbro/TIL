#include<stdio.h>
int main()
{
	double sti_s, sti_h, pira_s, pira_h;			//sti_s = ������ �׸��� ����, sti_h = ������ ����, pira_s = �Ƕ�̵� �׸��� ����(�Ƕ�̵������ �Ÿ�), pira_h = �Ƕ�̵��� ����
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &sti_h);
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &sti_s);
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * sti_h / sti_s;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", pira_h);
	return 0;
}