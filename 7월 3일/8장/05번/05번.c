#include<stdio.h>
#include"round.h"

int round(double n);

int main()
{
	double r;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("�ݿø��� ���� %d�Դϴ�.", round(r));
	return 0;
}