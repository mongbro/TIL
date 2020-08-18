#include"main.h"

void login() {
	char user_id[15] = { 0 }, user_pw[20] = { 0 };
	int count = 0, num = fcount();
	extern int log;
	extern char log_id[15];
	MEMBER* d;
	FILE* fp;
	while (1) {
		system("cls");
		printf("\n    ID : ");
		scanf("\n%[^\n]s", user_id);
		printf("\n    PW : ");
		scanf("\n%[^\n]s", user_pw);

		d = (MEMBER*)malloc(1 * sizeof(MEMBER));
		fp = fopen("info.dat", "rb");

		for (int i = 0; i < num; i++) {
			fread(d, sizeof(MEMBER), 1, fp);
			if (strcmp(user_id, d->id) == 0) {
				if (strcmp(user_pw, d->pw) == 0) {
					log = 1;
					break;
				}
			}
		}
		if(log == 0){
			count++;
			printf("로그인 실패 %d회\n", count);
			if (count == 5) {
				printf("5회이상 로그인에 실패하셨습니다.\n");
				printf("아무키나 누르세요.\n");
				if (getch()) {
					fclose(fp);
					free(d);
					return;
				}
			}
			printf("아무키나 누르세요.\n");
			if (getch())
				continue;
		}
		fclose(fp);
		if (log == 0)
			continue;
		if (log == 1) {
			strcpy(log_id, d->id);
			break;
		}
	}
	free(d);
}

void logout() {
	extern int log;
	extern char log_id[15];
	char answer;
	while (1) {
		system("cls");
		printf("\n    로그아웃 하시겠습니까? (Y or N)\n");
		answer = getch();
		if (answer == 'y' || answer == 'Y') {
			strcpy(log_id, "");
			log = 0;
			break;
		}
		if (answer == 'n' || answer == 'N') {
			break;
		}
	}
}

void sign_up1() {
	char answer1;
	char answer2;
	while (1) {
		system("cls");
		printf("이용약관 동의(필수)\n");
		printf("|===================================================|\n");
		printf("|  종은's Movies.com에 오신것을 환영합니다.         |\n");
		printf("|                                                   |\n");
		printf("|  (대충 이용약관이라는  내용)                      |\n");
		printf("|===================================================|\n");
		printf("\n이용 약관에 동의하십니까? Y or N");
		answer1 = _getch();
		if (answer1 != 'y' && answer1 != 'Y')
			break;
		printf("\n개인정보 수집 및 이용에 대한 안내(필수)\n");
		printf("|===================================================|\n");
		printf("|                                                   |\n");
		printf("|                                                   |\n");
		printf("|  (개인정보 수집 및 이용에 대한 안내에 관한 내용)  |\n");
		printf("|===================================================|\n");
		printf("\n개인정보 수집 및 이용에 동의하십니까? Y or N");
		answer2 = _getch();
		if (answer2 != 'y' && answer2 != 'Y')
			break;
		else{
			sign_up2();
			break;
		}
	}
}

void sign_up2() {
	FILE* fp;
	MEMBER* d;
	int check;
	int age;
	int num = 0;
	while (1) {
		d = (MEMBER*)malloc(1 * sizeof(MEMBER));
		system("cls");
		printf("\n");
		printf("  이름 : ");
		scanf("\n%[^\n]s", d->name);
		while (1) {
			printf("  나이 : ");
			num = scanf("%d", &age);

			while (getchar() != '\n');

			if (num == 1)
			{
				if (age <= 0)
					continue;
				d->age = age;
				break;

			}
		}
		printf("  ID : ");
		scanf("\n%[^\n]s", d->id);
		check = create_id(d->id);
		if (check == 0)
			continue;
		printf("  PW : ");
		scanf("\n%[^\n]s", d->pw);

		printf("회원가입이 완료되었습니다.\n");

		for (int i = 0; i < 100; i++) {
			d->rseat[i].x = -1;
			d->rseat[i].y = -1;
		}
		d->res_num = 0;

		fp = fopen("info.dat", "ab");
		fwrite(d, sizeof(MEMBER), 1, fp);
		fclose(fp);
		free(d);
		if (getch())
			break;
	}
}

int create_id(char id[15]) {
	MEMBER* list;
	FILE* fp;
	int num = fcount();

	for (int i = 0; i < strlen(id); i++) {
		if (isalnum(id[i]) == 0) {
			printf("아이디는 알파벳과 숫자의 조합입니다.\n");
			printf("다른 ID를 사용해주세요.");
			if (getch())
				return 0;
		}
	}

	if (num > 0) {
		list = (MEMBER*)malloc(1 * sizeof(MEMBER));
		fp = fopen("info.dat", "rb");
		while (1) {
			fread(list, sizeof(MEMBER), 1, fp);
			if (feof(fp) != 0)
				break;
			if (strcmp(list->id, id) == 0) {
				printf("중복되는 ID가 있습니다.\n");
				printf("다른 ID를 사용해주세요.");
				if (getch())
					return 0;
			}
		}
		fclose(fp);
		free(list);
	}
	return 1;
}

void check() {
	FILE* fp;
	MEMBER* d;
 	while (1) {
		system("cls");
		d = (MEMBER*)malloc(1 * sizeof(MEMBER));
		fp = fopen("info.dat", "rb");
		while (1) {
			fread(d, sizeof(MEMBER), 1, fp);
			if (feof(fp) != 0)
				break;

			printf("%s  %d  %s  %s\n===========\n", d->name, d->age, d->id, d->pw);
			for (int i = 0; i < d->res_num; i++) {
					printf("%d행 %d열, ", d->rseat[i].x, d->rseat[i].y);
			}
			printf("  <=  예약중인 좌석\n===========\n\n\n");
		}
		fclose(fp);
		free(d);
		printf("\n회원 목록 종료");
		if (getch())
			break;
	}
}

int fcount() {
	FILE* fp;
	MEMBER* d;
	int num = 0;

	d = (MEMBER*)malloc(1 * sizeof(MEMBER));
	fp = fopen("info.dat", "rb");
	while (1) {
		fread(d, sizeof(MEMBER), 1, fp);
		if (feof(fp) != 0)
			break;
		num++;
	}
	fclose(fp);
	free(d);

	return num;
}