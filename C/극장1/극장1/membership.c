#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
#include"membership.h"

void login(MEMBER mem[10]) {
	char user_id[15] = { 0 }, user_pw[20] = { 0 };
	int count = 0;
	int flag;
	int fail;
	extern int log;
	extern int lognum;
	extern void menu();
	while (1) {
		fail = 0;
		flag = 0;
		system("cls");
		printf("\n    ID : ");
		scanf("\n%[^\n]s", user_id);
		printf("\n    PW : ");
		scanf("\n%[^\n]s", user_pw);
		for (int i = 0; i < 10; i++) {
			if (strcmp(user_id, mem[i].id) == 0 && strcmp(user_pw, mem[i].pw) == 0) {
				log = 1;
				break;
			}
			for (int i = 0; i < strlen(user_id); i++) {
				if (isalnum(*(user_id + i)) == 0) {
					printf("아이디는 알파벳과 숫자의 조합입니다.\n");
					count++;
					fail = 1;
					flag = 1;
					printf("로그인 실패 %d회\n", count);
					if (count == 5) {
						printf("5회이상 로그인에 실패하셨습니다.\n");
						printf("아무키나 누르세요.\n");
						if (getch())
							return;
					}
					printf("아무키나 누르세요.\n");
					if (getch())
						break;
				}
			}
			if (flag == 0) {
				count++;
				fail = 1;
				printf("로그인 실패 %d회\n", count);
				if (count == 5) {
					printf("5회이상 로그인에 실패하셨습니다.\n");
					printf("아무키나 누르세요.\n");
					if (getch())
						return;
				}
				printf("아무키나 누르세요.\n");
				if (getch())
					break;
			}
			break;
		}
		if (fail == 1)
			continue;
		break;
	}
}

void logout() {
	extern int log;
	char answer;
	while (1) {
		system("cls");
		printf("\n    로그아웃 하시겠습니까? (Y or N)\n");
		answer = getch();
		if (answer == 'y' || answer == 'Y') {
			log = 0;
			break;
		}
		if (answer == 'n' || answer == 'N') {
			break;
		}
	}
}

void sign_up1(MEMBER mem[10]) {
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
		if (answer1 == 'n' || answer1 == 'N')
			break;
		printf("\n개인정보 수집 및 이용에 대한 안내(필수)\n");
		printf("|===================================================|\n");
		printf("|                                                   |\n");
		printf("|                                                   |\n");
		printf("|  (개인정보 수집 및 이용에 대한 안내에 관한 내용)  |\n");
		printf("|===================================================|\n");
		printf("\n개인정보 수집 및 이용에 동의하십니까? Y or N");
		answer2 = _getch();
		if (answer2 == 'n' || answer2 == 'N')
			break;
		else if (answer2 == 'y' || answer2 == 'Y') {
			sign_up2(mem);
			break;
		}
	}
}

void sign_up2(MEMBER mem[10]) {
	int num;
	for (int i = 0; i < 10; i++) {
		if (mem[i].flag == 0) {
			num = i;
			mem[i].memnum = num;
			break;
		}
	}
	while (1) {
		system("cls");
		printf("\n");
		printf("  이름 : ");
		scanf("\n%[^\n]s", mem[num].name);
		printf("  나이 : ");
		scanf("\n%[^\n]s", &mem[num].age);
		create_id(mem, num);
		printf("  PW : ");
		scanf("\n%[^\n]s", mem[num].pw);

		printf("회원가입이 완료되었습니다.\n");
		mem[num].flag = 1;
		break;
	}
}

void create_id(MEMBER mem[10], int num) {
	printf("  ID : ");
	scanf("\n%[^\n]s", mem[num].id);
	for (int i = 0; i < strlen(mem[num].id); i++) {
		if (isalnum(*(mem[num].id + i)) == 0) {
			printf("아이디는 알파벳과 숫자의 조합입니다.\n");
			printf("다른 ID를 사용해주세요.");
			create_id(mem, num);
		}
	}
	for (int i = 0; i < num; i++) {
		if (strcmp(mem[i].id, mem[num].id) == 0) {
			printf("중복되는 ID가 있습니다.\n");
			printf("다른 ID를 사용해주세요.");
			create_id(mem, num);
		}
	}
	return;
}