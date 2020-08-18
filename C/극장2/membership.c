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
			printf("�α��� ���� %dȸ\n", count);
			if (count == 5) {
				printf("5ȸ�̻� �α��ο� �����ϼ̽��ϴ�.\n");
				printf("�ƹ�Ű�� ��������.\n");
				if (getch()) {
					fclose(fp);
					free(d);
					return;
				}
			}
			printf("�ƹ�Ű�� ��������.\n");
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
		printf("\n    �α׾ƿ� �Ͻðڽ��ϱ�? (Y or N)\n");
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
		printf("�̿��� ����(�ʼ�)\n");
		printf("|===================================================|\n");
		printf("|  ����'s Movies.com�� ���Ű��� ȯ���մϴ�.         |\n");
		printf("|                                                   |\n");
		printf("|  (���� �̿����̶��  ����)                      |\n");
		printf("|===================================================|\n");
		printf("\n�̿� ����� �����Ͻʴϱ�? Y or N");
		answer1 = _getch();
		if (answer1 != 'y' && answer1 != 'Y')
			break;
		printf("\n�������� ���� �� �̿뿡 ���� �ȳ�(�ʼ�)\n");
		printf("|===================================================|\n");
		printf("|                                                   |\n");
		printf("|                                                   |\n");
		printf("|  (�������� ���� �� �̿뿡 ���� �ȳ��� ���� ����)  |\n");
		printf("|===================================================|\n");
		printf("\n�������� ���� �� �̿뿡 �����Ͻʴϱ�? Y or N");
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
		printf("  �̸� : ");
		scanf("\n%[^\n]s", d->name);
		while (1) {
			printf("  ���� : ");
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

		printf("ȸ�������� �Ϸ�Ǿ����ϴ�.\n");

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
			printf("���̵�� ���ĺ��� ������ �����Դϴ�.\n");
			printf("�ٸ� ID�� ������ּ���.");
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
				printf("�ߺ��Ǵ� ID�� �ֽ��ϴ�.\n");
				printf("�ٸ� ID�� ������ּ���.");
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
					printf("%d�� %d��, ", d->rseat[i].x, d->rseat[i].y);
			}
			printf("  <=  �������� �¼�\n===========\n\n\n");
		}
		fclose(fp);
		free(d);
		printf("\nȸ�� ��� ����");
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