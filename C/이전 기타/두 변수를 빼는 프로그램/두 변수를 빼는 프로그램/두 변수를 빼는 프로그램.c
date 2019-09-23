/* 두 변수를 입력하면 그 두 변수를 빼는 프로그램*/

#include <stdio.h>

double main(void)							//double을 사용한 이유는 두 변수의 차가 음수가 나올 수도 있기 때문에 (void는 생략가능)
{
	double x, y, diff;						//x, y, diff 라는 내용(그릇)을 사용하겠다. 세 변수는 double을 사용해서 실수로 표현하겠다.
	double scale = 0.0;
	printf("두 변수를 입력하시오.");		//첫 화면에 출력되는 문장
	scanf("%lf", &x);						//첫번째로 입력하는 수를 double형의 실수로 이해하고 그것을 x에 대입한다.
	scanf("%lf", &y);						//두번째로 입력하는 수를 double형의 실수로 이해하고 그것을 y에 대입한다.

	diff = x - y;							//diff는 x - y라고 정의한다.

	printf("두 변수의 차: %lf", diff);		//"두 변수의 차:"라는 문장 뒤에 x - y로 정의되있는 diff의 값을 대입한다.

	return 0;								//통째로 생략가능
}