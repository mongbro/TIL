#include"main.h"

int menu() {
	int a;
	extern int log;
	extern char log_id[15];
	while (1) {
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		if (log == 0)
			printf("                                           로그인 안됨\n");
		else
			printf("                              %15s 로그인 됨\n", log_id);
		printf("1. 예약\n\n");
		printf("2. 예약 취소\n\n");
		printf("3. 좌석보기\n\n");
		printf("4. 로그인\n\n");
		printf("5. 로그아웃\n\n");
		printf("6. 회원가입\n\n");
		printf("7. 정보 보기\n\n");
		printf("8. 종료\n\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		a = _getch();
		if (a == '1') {
			if (log == 1)
				return 1;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '2') {
			if (log == 1)
				return 2;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '3')
			return 3;
		if (a == '4')
			return 4;
		if (a == '5') {
			if (log == 1)
				return 5;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '6')
			return 6;
		if (a == '7')
			return 7;
		if (a == '8')
			return 8;
		else
			continue;
	}
}