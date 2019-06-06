#include<stdio.h>
#define PIE 3.141592
int main()
{
	double r, area, v;
	printf("구의 반지름을 입력하시오 : ");
	scanf_s("%lf", &r);

	area = 4 * r * r * PIE;
	v = 4.0 / 3.0 * r * r * r * PIE;
	printf("표면적은 %lf입니다.\n체적은 %lf입니다", area, v);
	return 0;
}