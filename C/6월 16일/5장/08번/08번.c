#include<stdio.h>
#define PIE 3.141592
int main()
{
	double area, volume, r;
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	area = 4 * r*r*PIE;
	volume = 4.0 / 3 * r*r*r*PIE;
	printf("ǥ������ %lf�Դϴ�.\nü���� %lf�Դϴ�.", area, volume);
	return 0;
}