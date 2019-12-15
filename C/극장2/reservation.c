#include"main.h"

void reservation() {
	char op;
	int num;
	int seats[10][10];
	char ap;
	FILE* fp;
	fp = fopen("seats.dat", "rb");
	fread(seats, sizeof(seats), 1, fp);
	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("몇석을 예약하시겠습니까?(1~100, 취소 : b) : ");
		scanf(" %c", &ap);
		if (ap == 'b')
			break;
		num = ap - 48;
		for (int i = 0; i < num; i++)
			reservation_c(seats);
		system("cls");
		seat(seats);
		printf("예약을 끝내시겠습니까? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
	fp = fopen("seats.dat", "wb");
	fwrite(seats, sizeof(seats), 1, fp);
	fclose(fp);
}

void reservation_c(int seats[][10]) {
	int row, col, num = fcount(), abc;
	char c1, c2;
	extern char log_id[15];
	FILE* fp;
	MEMBER* list, *d;

	d = (MEMBER*)malloc(1 * sizeof(MEMBER));				//현재 로그인 한 회원정보 메모리 할당
	fp = fopen("info.dat", "rb");

	for (int i = 0; i < num; i++) {
		fread(d, sizeof(MEMBER), 1, fp);				//파일에서 회원정보 하나씩 읽어오기
		if (strcmp(log_id, d->id) == 0) {				//현재 로그인 한 회원과 비교해서 같은 정보 찾기
			abc = i;
			break;										//현재 회원과 같은 정보를 찾으면 루프 빠져나가기
		}
	}

	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("예약할 행을 선택해주세요.(뒤로가기는 b) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		printf("\n");
		if (row >= 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if (getch())
				continue;
		}
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("    | 0. | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("%d. ", row);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[row][j]);
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("예약할 열을 선택해주세요.(뒤로가기는 b) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		printf("\n");
		if (col > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if (getch())
				continue;
		}
		else {
			if (seats[row][col] == 0) {
				d->rseat[d->res_num].x = row;
				d->rseat[d->res_num].y = col;
				(d->res_num)++;
				seats[row][col] = 1;
				break;
			}
			if (seats[row][col] == 1) {
				printf("이미 예약이 되어있는 자리입니다. 다른 자리를 선택해주세요.\n");
				if (getch())
					continue;
			}
		}
	}

	list = (MEMBER*)malloc(num * sizeof(MEMBER));
	fp = fopen("info.dat", "rb");
	fread(list, sizeof(MEMBER), num, fp);
	fclose(fp);

	for (int j = 0; j < d->res_num; j++) {
		(list + abc)->rseat[j].x = d->rseat[j].x;
		(list + abc)->rseat[j].y = d->rseat[j].y;
	}
	(list + abc)->res_num = d->res_num;
	fp = fopen("info.dat", "wb");
	fwrite(list, sizeof(MEMBER), num, fp);
	fclose(fp);
	free(list);
	free(d);
}