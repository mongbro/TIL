#include<stdio.h>
int main()
{
	double weight, height, standerd;
	printf("체중과 키를 입력하세요 : ");
	scanf_s("%lf%lf", &weight, &height);
	
	standerd = (height - 100)*0.9;

	if (weight > standerd + 10)
		printf("과체중입니다.");
	else if (weight < standerd - 10)
		printf("저체중입니다.");
	else
		printf("정상체중입니다.");
	return 0;
}