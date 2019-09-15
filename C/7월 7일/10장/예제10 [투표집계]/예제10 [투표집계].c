#include<stdio.h>
int main()
{
	int can[10] = { 0 };
	int vote;
	while (1)
	{
		printf("몇번 후보자를 선택하시겠습니까?(종료 : -1) : ");
		scanf_s("%d", &vote);
		if (vote < 0)
			break;

		switch (vote)
		{
		case 1:
			can[0]++;
			break;
		case 2:
			can[1]++;
			break;
		case 3:
			can[2]++;
			break;
		case 4:
			can[3]++;
			break;
		case 5:
			can[4]++;
			break;
		case 6:
			can[5]++;
			break;
		case 7:
			can[6]++;
			break;
		case 8:
			can[7]++;
			break;
		case 9:
			can[8]++;
			break;
		case 10:
			can[9]++;
			break;
		}
	}
	printf("값\t\t득표결과\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t\t%d\n", i+1, can[i]);
	}
	return 0;
}