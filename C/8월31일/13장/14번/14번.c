#include<stdio.h>
#include<string.h>

struct music {
	char name[100];
	char singer[50];
	char location[100];
	int genre;
};

void menu();
void add(struct music* m, int n);
void print(struct music* m, int n);
void search(struct music* m, int n);

int main() {
	int n = 0;
	int choice;
	struct music m[10] = { 0 };

	while (1) {
		menu();

		printf("�������� �Է��Ͻÿ� : ");
		scanf("\n%d", &choice);

		if (choice == 4)
			break;

		switch (choice) {
		case 1:
			add(m, n);
			break;
		case 2:
			print(m, n);
			break;
		case 3:
			search(m, n);
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
		n++;
	}
}

void menu() {
	printf("\n====================\n");
	printf("1. �߰�\n");
	printf("2. ���\n");
	printf("3. �˻�\n");
	printf("4. ����\n");
	printf("====================\n\n");
}
void add(struct music* m, int n) {
	printf("���� : ");
	scanf("\n%s", m[n].name);
	printf("���� : ");
	scanf("\n%s", m[n].singer);
	printf("��ġ : ");
	scanf("\n%s", m[n].location);
	printf("�帣(0:����, 1:��, 2: Ŭ����, 3:��ȭ����) : ");
	scanf("\n%d", &m[n].genre);
}

void print(struct music* m, int n) {

	for (int i = 0; i < n; i++) {
		printf("���� : %s\n", m[i].name);
		printf("���� : %s\n", m[i].singer);
		printf("��ġ : %s\n", m[i].location);
		printf("�帣(0:����, 1:��, 2: Ŭ����, 3:��ȭ����) : %d\n", m[i].genre);
	}
}

void search(struct music* m, int n) {
	int choice;
	int sea_i;
	char sea_c[100] = { 0 };

	printf("� �˻��� �Ͻðڽ��ϱ�(1:����, 2:����, 3:��ġ, 4:�帣) : ");
	scanf("\n%d", &choice);
	
	switch (choice) {
	case 1:
		printf("�˻� : ");
		scanf("\n%s", sea_c);
		printf("\n");

		for (int i = 0; i <= n; i++) {
			if (strcmp(sea_c, m[i].name) == 0) {
				printf("���� : %s\n", m[i].name);
				printf("���� : %s\n", m[i].singer);
				printf("��ġ : %s\n", m[i].location);
				printf("�帣(0:����, 1:��, 2: Ŭ����, 3:��ȭ����) : %d\n", m[i].genre);
			}
		}
		break;
	case 2:
		printf("�˻� : ");
		scanf("\n%s", sea_c);
		printf("\n");

		for (int i = 0; i <= n; i++) {
			if (strcmp(sea_c, m[i].singer) == 0) {
				printf("���� : %s\n", m[i].name);
				printf("���� : %s\n", m[i].singer);
				printf("��ġ : %s\n", m[i].location);
				printf("�帣(0:����, 1:��, 2: Ŭ����, 3:��ȭ����) : %d\n", m[i].genre);
			}
		}
		break;
	case 3:
		printf("�˻� : ");
		scanf("\n%d", &sea_i);

		for (int i = 0; i <= n; i++) {
			if (sea_i == m[i].genre) {
				printf("���� : %s\n", m[i].name);
				printf("���� : %s\n", m[i].singer);
				printf("��ġ : %s\n", m[i].location);
				printf("�帣(0:����, 1:��, 2: Ŭ����, 3:��ȭ����) : %d\n", m[i].genre);
			}
		}
		break;
	}
}