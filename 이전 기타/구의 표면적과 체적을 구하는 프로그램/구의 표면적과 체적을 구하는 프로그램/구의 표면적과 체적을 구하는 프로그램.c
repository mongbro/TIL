/*구의 표면적과 체적을 구하는 프로그램*/
#include<stdio.h>
#define PIE 3.141592
void main()
{
	double r, area, weight;

	printf("구의 반지름을 입력하시오 : ");
	scanf("%lf", &r);

	area = 4 * PIE*r*r;
	weight = (4.0 / 3) * PIE*r*r*r;										// (4/3)으로 입력하면 몫이 1이 나오므로 PIE*r*r*r 값만 출력된다.

	printf("표면적은 %lf입니다.\n체적은 %lf입니다.", area, weight);
	return 0;
}