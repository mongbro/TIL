#include<stdio.h>
int main()
{
	int age, time;
	printf("현재시간와 나이를 입력하시오 : ");
	scanf_s("%d%d", &time, &age);

	if (time > 24)
		printf("하루는 24시간");
	else if (time > 17)
		printf("요금은 10,000원 입니다.");
	else if ("age>=65||age<=12||age>=3")
		printf("요금은 25,000원 입니다.");
	else
		printf("요금은 34,000원 입니다.");
	return 0;
}