/*���� ǥ������ ü���� ���ϴ� ���α׷�*/
#include<stdio.h>
#define PIE 3.141592
void main()
{
	double r, area, weight;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &r);

	area = 4 * PIE*r*r;
	weight = (4.0 / 3) * PIE*r*r*r;										// (4/3)���� �Է��ϸ� ���� 1�� �����Ƿ� PIE*r*r*r ���� ��µȴ�.

	printf("ǥ������ %lf�Դϴ�.\nü���� %lf�Դϴ�.", area, weight);
	return 0;
}