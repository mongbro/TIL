#include<stdio.h>
int main()
{
	double height, weight, standard;
	printf("체중과 키를 입력하시오 : ");
	scanf_s("%lf%lf", &weight, &height);
	standard = (weight - 100)*0.9;
	if (weight > standard)
		printf("과체중입니다.");
	else
		printf("저체중입니다.");
	return 0;
}