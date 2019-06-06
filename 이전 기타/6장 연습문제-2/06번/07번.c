#include<stdio.h>
int main()
{
	int weight, height;
	printf("체중과 키를 입력하세요 : ");
	scanf_s("%d %d", &weight, &height);

	if ((height - 100)*0.9 < weight)
		printf("과체중입니다.");
	else if ((height - 100)*0.9 == weight)
		printf("정상체중입니다.");
	else
		printf("저체중입니다.");

	return 0;
}