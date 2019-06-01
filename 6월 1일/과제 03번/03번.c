#include<stdio.h>
int main()
{
	int number;
	char var;
	printf("입력");
	scanf_s("%d", &number);
	
	if (number > 0)
		var = 'p';
	else if (number < 0)
		var = 'm';
	else
		var = 'z';
		
	switch (var)
	{
	case 'p':
		printf("양수입니다.");
		break;
	case 'm':
		printf("음수입니다.");
		break;
	case 'z':
		printf("0입니다.");
		break;
	default:
		printf("잘못 입력하셨습니다.");
		break;
	}
	return 0;
}