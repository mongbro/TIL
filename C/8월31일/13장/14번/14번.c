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

		printf("정수값을 입력하시오 : ");
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
			printf("잘못된 입력입니다.\n");
			break;
		}
		n++;
	}
}

void menu() {
	printf("\n====================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("====================\n\n");
}
void add(struct music* m, int n) {
	printf("제목 : ");
	scanf("\n%s", m[n].name);
	printf("가수 : ");
	scanf("\n%s", m[n].singer);
	printf("위치 : ");
	scanf("\n%s", m[n].location);
	printf("장르(0:가요, 1:팝, 2: 클래식, 3:영화음악) : ");
	scanf("\n%d", &m[n].genre);
}

void print(struct music* m, int n) {

	for (int i = 0; i < n; i++) {
		printf("제목 : %s\n", m[i].name);
		printf("가수 : %s\n", m[i].singer);
		printf("위치 : %s\n", m[i].location);
		printf("장르(0:가요, 1:팝, 2: 클래식, 3:영화음악) : %d\n", m[i].genre);
	}
}

void search(struct music* m, int n) {
	int choice;
	int sea_i;
	char sea_c[100] = { 0 };

	printf("어떤 검색을 하시겠습니까(1:제목, 2:가수, 3:위치, 4:장르) : ");
	scanf("\n%d", &choice);
	
	switch (choice) {
	case 1:
		printf("검색 : ");
		scanf("\n%s", sea_c);
		printf("\n");

		for (int i = 0; i <= n; i++) {
			if (strcmp(sea_c, m[i].name) == 0) {
				printf("제목 : %s\n", m[i].name);
				printf("가수 : %s\n", m[i].singer);
				printf("위치 : %s\n", m[i].location);
				printf("장르(0:가요, 1:팝, 2: 클래식, 3:영화음악) : %d\n", m[i].genre);
			}
		}
		break;
	case 2:
		printf("검색 : ");
		scanf("\n%s", sea_c);
		printf("\n");

		for (int i = 0; i <= n; i++) {
			if (strcmp(sea_c, m[i].singer) == 0) {
				printf("제목 : %s\n", m[i].name);
				printf("가수 : %s\n", m[i].singer);
				printf("위치 : %s\n", m[i].location);
				printf("장르(0:가요, 1:팝, 2: 클래식, 3:영화음악) : %d\n", m[i].genre);
			}
		}
		break;
	case 3:
		printf("검색 : ");
		scanf("\n%d", &sea_i);

		for (int i = 0; i <= n; i++) {
			if (sea_i == m[i].genre) {
				printf("제목 : %s\n", m[i].name);
				printf("가수 : %s\n", m[i].singer);
				printf("위치 : %s\n", m[i].location);
				printf("장르(0:가요, 1:팝, 2: 클래식, 3:영화음악) : %d\n", m[i].genre);
			}
		}
		break;
	}
}