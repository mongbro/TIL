#include<stdio.h>
int main()
{
	int seat[] = { 1,2,3,4,5,6,7,8,9,10 };				//좌석번호
	int res[10] = { 0 }, want1, want2;		//예약가능여부
	int check;
	char yon;											//yes or no
	while (1)
	{
		check = 0;
		for (int i = 0; i < 10; i++)
		{
			if (res[i] == 0)
			{
				check++;
			}
		}
		if (check == 0)
		{
			printf("\n현재 예약 가능한 좌석이 없습니다.\n");
			break;
		}
		else
		{
			printf("현재 예약 가능한 좌석은 %d개 입니다.\n", check);
		}

		printf("좌석을 예약하시겠습니까?(y 또는 n)");
		scanf_s("\n%c", &yon, 1);
		if (yon == 'n')
			break;								//no일때 while문에서 나간다.
		
		printf("----------------------\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", seat[i]);				//좌석번호 띄우기
		}
		printf("\n----------------------\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", res[i]);				//좌석마다 예약된 좌석 띄우기
		}

		printf("\n몇번째 좌석을 예약하시겠습니까? ");
		scanf_s("%d %d", &want1, &want2);

		if (want1 > 10 || want1 < 1)
		{
			printf("1번 손님이 선택하신 좌석은 존재하지 않습니다.\n");
			continue;
		}
		if (want2 > 10 || want2 < 1)
		{
			printf("2번 손님이 선택하신 좌석은 존재하지 않습니다.\n");
			continue;
		}

		if (res[want1 - 1] == 1)					//해당 좌석번호(배열은 0부터 시작하니까 하나 줄이고 검사)가 예약이 되있을때
		{
			printf("1번 손님이 원하는 자리는 이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
			continue;
		}
		if (res[want2 - 1] == 1)					//해당 좌석번호(배열은 0부터 시작하니까 하나 줄이고 검사)가 예약이 되있을때
		{
			printf("2번 손님이 원하는 자리는 이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
			continue;
		}
		else
		{
			if (want2 == ' ')
			{
				printf("예약되었습니다.\n");
				res[want1 - 1] = 1;					//해당 좌석번호 예약가능여부 바꾸기
			}
			else
			{
				printf("예약되었습니다.\n");
				res[want1 - 1] = 1;					//해당 좌석번호 예약가능여부 바꾸기
				res[want2 - 1] = 1;
			}
		}
	}
}