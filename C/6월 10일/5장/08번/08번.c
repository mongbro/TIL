#include<stdio.h>
int main()
{
	double r, area, vol;
	printf("구의 반지름을 입력하시오 : ");
	scanf_s("%lf", &r);
	const double PIE = 3.141592;
	area = 4 * r*r*PIE;
	vol = 4.0 / 3.0*r*r*r*PIE;
	printf("표면적 : %lf\n", area);
	printf("체적 : %lf", vol);
	return 0;
}