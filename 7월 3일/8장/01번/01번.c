#include<stdio.h>
#include"square.h"			//square�� ���ǰ� ����ִ� �������

double square(double n);	//�Ǽ� n�� �����ϴ� �Լ�

int main()
{
	double n, result;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &n);
	result = square(n);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", n, result);
	return 0;
}