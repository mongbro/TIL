#include<stdio.h>
#include<math.h>
#include"mong.h"
double get_dis(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1, x2, y2;
	double dis;
	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%lf%lf", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%lf%lf", &x2, &y2);
	dis = get_dis(x1, y1, x2, y2);
	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.", dis);
	return 0;
}