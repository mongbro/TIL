#include<stdio.h>
int main()
{
	int month;
	printf("월번호를 입력하시오 : ");
	scanf_s("%d", &month);

	switch (month) {
	case 1:
		printf("JAN");
		break;
	case 2:
		printf("FEB");
		break;
	case 3:
		printf("MAR");
		break;
	case 4:
		printf("APR");
		break;
	case 5:
		printf("MAY");
		break;
	case 6:
		printf("JUN");
		break;
	case 7:
		printf("JUL");
		break;
	case 8:
		printf("AUG");
		break;
	case 9:
		printf("SEP");
		break;
	case 10:
		printf("OCT");
		break;
	case 11:
		printf("NOV");
		break;
	case 12:
		printf("DEC");
		break;
	default:
		printf("일년은 12개월입니다.");
		break;
	}
	return 0;
}