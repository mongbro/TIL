#include<stdio.h>
#include<Windows.h>

typedef struct music {
	int num;
	char name[20];
	char singer[20];
	char location[30];
	int genre;
}MUSIC;

int main() {
	MUSIC m[100];
	int input, idx = 0;
	char search[20];
	while (1) {
		system("cls");
		printf("=============\n");
		printf("1. �߰�\n");
		printf("2. ���\n");
		printf("3. �˻�\n");
		printf("4. ����\n");
		printf("=============\n");
		printf("�޴��� �����Ͻÿ� : ");
		scanf("%d", &input);
		if (input == 4)
			break;
		else if (input == 1) {
			m[idx].num = idx;
			printf("���� : ");
			scanf("\n%[^\n]s", m[idx].name);
			printf("���� : ");
			scanf("\n%[^\n]s", m[idx].singer);
			printf("��ġ : ");
			scanf("\n%[^\n]s", m[idx].location);
			printf("�帣(0 : ����, 1 : ��, 2 : Ŭ����, 3 : ��ȭ����) : ");
			scanf("\n%d", &m[idx].genre);
			idx++;
			continue;
		}
		else if (input == 2) {
			for (int i = 0; i < idx; i++) {
				printf("��ȣ : %d\n", m[i].num);
				printf("���� : %s\n", m[i].name);
				printf("���� : %s\n", m[i].singer);
				printf("��ġ : %s\n", m[i].location);
				printf("�帣(0 : ����, 1 : ��, 2 : Ŭ����, 3 : ��ȭ����) : %d\n", m[i].genre);
				if (getch())
					continue;
			}
		}
		else if (input == 3) {
			printf("������ �Է��Ͻÿ� : ");
			scanf("\n%[^\n]s", search);
			for (int i = 0; i < idx; i++) {
				if (strcmp(search, m[i].name) == 0) {
					printf("��ȣ : %d\n", m[i].num);
					printf("���� : %s\n", m[i].name);
					printf("���� : %s\n", m[i].singer);
					printf("��ġ : %s\n", m[i].location);
					printf("�帣(0 : ����, 1 : ��, 2 : Ŭ����, 3 : ��ȭ����) : %d\n", m[i].genre);
				}
			}
			if (getch())
				continue;
		}
	}
}