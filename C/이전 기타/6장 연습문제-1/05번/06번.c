/*몇월인지 숫자롤 받아서 영어로 표시*/

#include<stdio.h>
int main()
{
	int month;

	printf("월번호를 입력하세요(숫자!!) : \n");
	scanf_s("%d", &month);

	
	switch (month)
	{
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sept");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	default:
		printf("1년은 12개월입니다. 1부터 12중에서 골라주세요");
		break;
	}

	return 0;
}