#include"main.h"

void deservation() {
	char op;
	int num;
	int seats[10][10];
	FILE* fp;
	fp = fopen("seats.dat", "rb");
	fread(seats, sizeof(seats), 1, fp);
	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("몇석을 취소하시겠습니까?(1~100) : ");
		scanf("%d", &num);
		for (int i = 0; i < num; i++)
			deservation_c(seats);
		system("cls");
		seat(seats);
		printf("예약 취소를 끝내시겠습니까? Y or N\n");
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

void deservation_c(int seats[][10]) {
	int row, col, num = fcount(), check, abc;			//num = 전체 회원 숫자, abc = 현재 회원의 번호(나중에 전체 회원에서 해당 회원 찾을때 사용)
	char c1, c2;
	extern char log_id[15];
	FILE* fp;
	MEMBER* list, * d;

	d = (MEMBER*)malloc(1 * sizeof(MEMBER));			//현재 로그인 한 회원정보 메모리 할당
	fp = fopen("info.dat", "rb");
	for (int i = 0; i < num; i++) {
		fread(d, sizeof(MEMBER), 1, fp);				//파일에서 회원정보 하나씩 읽어오기
		if (strcmp(log_id, d->id) == 0) {				//현재 로그인 한 회원과 비교해서 같은 정보 찾기
			abc = i;									//회원번호(?)
			break;										//현재 회원과 같은 정보를 찾으면 루프 빠져나가기
		}
	}
	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("취소할 행을 선택해주세요.(뒤로가기는 b) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		printf("\n");
		if (row > 10) {
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
		printf("취소할 열을 선택해주세요.(뒤로가기는 b) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		check = 0;
		printf("\n");
		if (col > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if (getch())
				continue;
		}
		else {
			if (seats[row][col] == 1) {
				for (int i = 0; i < d->res_num; i++) {						//현재 회원이 예약한 좌석을 하나씩 돌면서
					if (d->rseat[i].x == row && d->rseat[i].y == col) {		//입력한 좌석과 같은 예약번호를 찾음
						for (int j = i; j < d->res_num; j++) {
							d->rseat[j].x = d->rseat[j + 1].x;
							d->rseat[j].y = d->rseat[j + 1].y;
						}
						d->rseat[d->res_num - 1].x = -1;
						d->rseat[d->res_num - 1].y = -1;
						check = 1;
						(d->res_num)--;												//좌석 예약 갯수 감소
						seats[row][col] = 0;										//좌석 예약 취소
						break;
					}
				}
				if (check == 0) {											//예약은 되어있지만 다른 회원이 예약한 좌석
					printf("다른 회원님이 예약한 자리입니다.\n다른 자리를 선택해주세요.\n");
					if (getch())
						continue;											//루프 위로 돌아간다. 60라인으로 이동
				}
				break;
			}
			if (seats[row][col] == 0) {
				printf("예약되어있지 않은 자리입니다. 다른 자리를 선택해주세요.\n");
				if (getch())
					continue;												//60라인으로 이동
			}
		}
	}

	list = (MEMBER*)malloc(num * sizeof(MEMBER));
	fp = fopen("info.dat", "rb");
	fread(list, sizeof(MEMBER), num, fp);
	fclose(fp);

	for (int i = 0; i < d->res_num + 1; i++) {
		(list + abc)->rseat[i].x = d->rseat[i].x;
		(list + abc)->rseat[i].y = d->rseat[i].y;
	}
	(list + abc)->res_num = d->res_num;

	fp = fopen("info.dat", "wb");
	fwrite(list, sizeof(MEMBER), num, fp);
	fclose(fp);
	free(list);
	free(d);
}