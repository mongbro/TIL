#include<stdio.h>
int main()
{
	int hight, weight;
	double sweight;								//sweight = 표준체중
	printf("체중과 키를 입력하세요 : ");
	scanf("%d%d", &weight, &hight);

	sweight = (hight - 100)*0.9;

	if (weight > sweight)
		printf("과체중입니다.");
	else
		printf("저체중입니다.");

	return 0;
}