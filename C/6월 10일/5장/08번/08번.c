#include<stdio.h>
int main()
{
	double r, area, vol;
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	const double PIE = 3.141592;
	area = 4 * r*r*PIE;
	vol = 4.0 / 3.0*r*r*r*PIE;
	printf("ǥ���� : %lf\n", area);
	printf("ü�� : %lf", vol);
	return 0;
}