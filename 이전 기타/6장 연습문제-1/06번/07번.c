/*과제중, 저체중*/

#include<stdio.h>
int main()
{
	int weight, hight;
	double standerd;

	printf("체중과 키를 입력하세요 : ");
	scanf("%d%d", &weight, &hight);

	standerd = (hight - 100)*0.9;

	if (weight > standerd)
		printf("과체중입니다.");
	else if (weight == standerd)
		printf("표준입니다.");
	else
		printf("저체중입니다.");

	return 0;
}