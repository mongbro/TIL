#include<stdio.h>
int main()
{
	int seat[] = { 1,2,3,4,5,6,7,8,9,10 };		//좌석번호
	int res[10] = { 0 }, want;					//예약가능여부
	char yon;									//yes or no
	while (1)
	{
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
		scanf_s("%d", &want);
		if (want > 10 || want < 1) 
		{
			printf("해당 좌석은 존재하지 않습니다.\n");
			continue;
		}

		if (res[want-1] == 1)					//해당 좌석번호(배열은 0부터 시작하니까 하나 줄이고 검사)가 예약이 되있을때
			printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
		else
		{
			printf("예약되었습니다.\n");
			res[want-1] = 1;					//해당 좌석번호 예약가능여부 바꾸기
		}
	}
}