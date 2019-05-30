#include<stdio.h>
#define x 3.3058
int main()
{
	double PY, M2;
	
	printf("평을 입력하시오 : ");
	scanf("%lf", &PY);

	M2 = PY * x;

	printf("%lf 평은 %lf제곱미터 입니다.", PY, M2);
	return 0;
}