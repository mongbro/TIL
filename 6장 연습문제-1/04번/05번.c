/*롤러코스터 나이, 키 제한*/

#include<stdio.h>
int main()
{
	int age, hight;

	printf("키를 입력하세요 : ");
	scanf_s("%d", &hight);
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	if (age >= 10 && hight >= 140)
		printf("타도 좋습니다.");
	else
		printf("죄송합니다.");

	return 0;
}