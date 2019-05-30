#include<stdio.h>
int main()
{
	int time, age;
	printf("현재 시간과 나이를 입력하시오(시간은 24시간단위로 표현) : ");
	scanf("%d%d", &time, &age);

	if (time > 24)
		printf("정확한 시간을 입력하세요");
	else if (time > 17)
		printf("요금은 10,000원 입니다.");
	else if (age < 3)
		printf("3세 미만은 놀이공원 출입금지");
	else if (age >= 65 || age <= 12)
		printf("요금은 25,000원 입니다.");
	else
		printf("요금은 34,000원 입니다.");

	return 0;
}