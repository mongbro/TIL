#include<stdio.h>
#include<math.h>
#include"mong.h"
double get_dis(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1, x2, y2;
	double dis;
	printf("첫번째 점의 좌표를 입력하시오 : ");
	scanf_s("%lf%lf", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오 : ");
	scanf_s("%lf%lf", &x2, &y2);
	dis = get_dis(x1, y1, x2, y2);
	printf("두 점 사이의 거리는 %lf입니다.", dis);
	return 0;
}