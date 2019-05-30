/*자유이용권 가격*/

#include<stdio.h>
int main()
{
	int time, age;
	printf("현재 시간과 나이를 입력하시오(시간은 24시간단위) : ");
	scanf_s("%d%d", &time, &age);

	if (time > 24)
		printf("\n하루는 24시간입니다. 0~24중 입력해주세요.");
	else if (age < 3)
		printf("\n3세 미만 아동은 놀이공원을 이용할 수 없습니다.");
	else if (time < 17)
		if (age <= 12 || age >= 65)
			printf("\n요금은 25,000원 입니다.");
		else
			printf("\n요금은 34,000원 입니다.");
	else
		printf("\n요금은 10,000원 입니다.");

	return 0;
}