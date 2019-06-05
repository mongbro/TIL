#include<stdio.h>
int main()
{
	int time, age;
	printf("현재시간과 나이를 입력하세요 : ");
	scanf_s("%d%d", &time, &age);
	if (time > 17)
		printf("요금은 10,000원입니다.");
	else if (age >= 3 && age <= 12 || age >= 65)
		printf("요금은 25,000원입니다.");
	else
		printf("요금은 34,000원입니다.");
	return 0;
}