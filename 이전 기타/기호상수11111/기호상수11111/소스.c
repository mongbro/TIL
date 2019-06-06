#include<stdio.h>
#define PY_PER_M2 3.3058
int main()
{
	double PY, M2;
	printf("평을 입력하시오 : ");
	scanf("%lf", &PY);

	M2 = PY * PY_PER_M2;

	printf("%lf평은 %lf제곱미터 입니다.", PY, M2);
	return 0;
}