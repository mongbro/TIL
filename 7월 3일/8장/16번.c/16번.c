#include<stdio.h>
#include"mong.h"
double factorial(long long n);			//factorial ���ϴ� �Լ�
double euler(long long n);					//���Ϸ� ���ϴ� �Լ�
int main()
{
	long long n;
	printf("������ ����ұ��?");
	scanf_s("%I64d", &n);
	printf("���Ϸ��� ���� %lf�Դϴ�.", euler(n));

	return 0;
}