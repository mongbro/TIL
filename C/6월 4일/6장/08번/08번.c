#include<stdio.h>
int main()
{
	int time, age;
	printf("현재시간과 나이를 입력하시오 : ");
	scanf_s("%d%d", &time, &age);
	if (time > 17)
		printf("요금은 10,000원 입니다.");
	else if (age >= 3 && age <= 12 || age >= 65)
		printf("요금은 25,000원 입니다.");
	else
		printf("요금은 34,000원 입니다.");
	return 0;
}