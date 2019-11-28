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
					printf("���̵�� ���ĺ��� ������ �����Դϴ�.\n");
					count++;
					fail = 1;
					flag = 1;
					printf("�α��� ���� %dȸ\n", count);
					if (count == 5) {
						printf("5ȸ�̻� �α��ο� �����ϼ̽��ϴ�.\n");
						printf("�ƹ�Ű�� ��������.\n");
						if (getch())
							return;
					}
					printf("�ƹ�Ű�� ��������.\n");
					if (getch())
						break;
				}
			}
			if (flag == 0) {
				count++;
				fail = 1;
				printf("�α��� ���� %dȸ\n", count);
				if (count == 5) {
					printf("5ȸ�̻� �α��ο� �����ϼ̽��ϴ�.\n");
					printf("�ƹ�Ű�� ��������.\n");
					if (getch())
						return;
				}
				printf("�ƹ�Ű�� ��������.\n");
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
		printf("\n    �α׾ƿ� �Ͻðڽ��ϱ�? (Y or N)\n");
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
		printf("�̿��� ����(�ʼ�)\n");
		printf("|===================================================|\n");
		printf("|  ����'s Movies.com�� ���Ű��� ȯ���մϴ�.         |\n");
		printf("|                                                   |\n");
		printf("|  (���� �̿����̶��  ����)                      |\n");
		printf("|===================================================|\n");
		printf("\n�̿� ����� �����Ͻʴϱ�? Y or N");
		answer1 = _getch();
		if (answer1 == 'n' || answer1 == 'N')
			break;
		printf("\n�������� ���� �� �̿뿡 ���� �ȳ�(�ʼ�)\n");
		printf("|===================================================|\n");
		printf("|                                                   |\n");
		printf("|                                                   |\n");
		printf("|  (�������� ���� �� �̿뿡 ���� �ȳ��� ���� ����)  |\n");
		printf("|===================================================|\n");
		printf("\n�������� ���� �� �̿뿡 �����Ͻʴϱ�? Y or N");
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
		printf("  �̸� : ");
		scanf("\n%[^\n]s", mem[num].name);
		printf("  ���� : ");
		scanf("\n%[^\n]s", &mem[num].age);
		create_id(mem, num);
		printf("  PW : ");
		scanf("\n%[^\n]s", mem[num].pw);

		printf("ȸ�������� �Ϸ�Ǿ����ϴ�.\n");
		mem[num].flag = 1;
		break;
	}
}

void create_id(MEMBER mem[10], int num) {
	printf("  ID : ");
	scanf("\n%[^\n]s", mem[num].id);
	for (int i = 0; i < strlen(mem[num].id); i++) {
		if (isalnum(*(mem[num].id + i)) == 0) {
			printf("���̵�� ���ĺ��� ������ �����Դϴ�.\n");
			printf("�ٸ� ID�� ������ּ���.");
			create_id(mem, num);
		}
	}
	for (int i = 0; i < num; i++) {
		if (strcmp(mem[i].id, mem[num].id) == 0) {
			printf("�ߺ��Ǵ� ID�� �ֽ��ϴ�.\n");
			printf("�ٸ� ID�� ������ּ���.");
			create_id(mem, num);
		}
	}
	return;
}