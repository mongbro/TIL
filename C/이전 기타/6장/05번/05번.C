#include<stdio.h>
int main()
{
	int age, hight;
	printf("키를 입력하시오(cm) : ");
	scanf("%d", &hight);
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);

	if (hight >= 140)
		if (age >= 10)
			printf("타도 좋습니다.");
		else
			printf("죄송합니다.");
	else
		printf("죄송합니다.");

	return 0;
}