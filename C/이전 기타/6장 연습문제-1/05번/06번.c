/*������� ���ڷ� �޾Ƽ� ����� ǥ��*/

#include<stdio.h>
int main()
{
	int month;

	printf("����ȣ�� �Է��ϼ���(����!!) : \n");
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
		printf("1���� 12�����Դϴ�. 1���� 12�߿��� ����ּ���");
		break;
	}

	return 0;
}