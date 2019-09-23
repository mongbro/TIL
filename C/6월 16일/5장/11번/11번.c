#include<stdio.h>
int main()
{
	double dis, ang, r;						//dis = 시에네에서 알렉산드리아까지의 거리, ang = 막대와 그림자가 이루는 각도, r = 지구의 반지름
	printf("거리를 입력하싱 : ");
	scanf_s("%lf", &dis);
	printf("각도를 입력하시오 : ");
	scanf_s("%lf", &ang);
	r = 360 / 3.14 / ang * dis / 2;
	printf("지구의 반지름 : %lf", r);
	return 0;
}