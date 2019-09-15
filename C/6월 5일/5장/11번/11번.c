#include<stdio.h>
int main()
{
	double dis, ang, r;
	printf("거리를 입력하시오 : ");
	scanf_s("%lf", &dis);
	printf("각도를 입력하시오 : ");
	scanf_s("%lf", &ang);
	r = 360 / ang * dis / 2 / 3.14;
	printf("지구의 반지름은 %lf입니다.", r);
	return 0;
}