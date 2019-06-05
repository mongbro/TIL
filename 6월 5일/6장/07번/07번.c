#include<stdio.h>
int main()
{
	int height, weight;
	double standerd;
	printf("체중과 키를 입력하시오 : ");
	scanf_s("%d%d", &weight, &height);
	standerd = (height - 100)*0.9;
	if (weight > standerd)
		printf("과체중입니다.");
	else
		printf("저체중입니다.");
	return 0;
}