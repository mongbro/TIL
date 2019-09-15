#include<stdio.h>
int main()
{
	int weight, height;
	double standerd;
	printf("체중과 키를 입력하세요 : ");
	scanf_s("%d%d", &weight, &height);

	standerd = (height - 100)*0.9;

	if (weight >= standerd + 10)
		printf("과체중입니다.\n");
	else if (weight <= standerd - 10)
		printf("저체중입니다.\n");
	else
		printf("정상체중입니다.\n");

	printf("표중체중은 %lf입니다.", standerd);

	return 0;
}