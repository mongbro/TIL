#include<stdio.h>
int main()
{
	double dis, ang, r;						//dis = �ÿ��׿��� �˷���帮�Ʊ����� �Ÿ�, ang = ����� �׸��ڰ� �̷�� ����, r = ������ ������
	printf("�Ÿ��� �Է��Ͻ� : ");
	scanf_s("%lf", &dis);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &ang);
	r = 360 / 3.14 / ang * dis / 2;
	printf("������ ������ : %lf", r);
	return 0;
}