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
		printf("1. 추가\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		printf("=============\n");
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &input);
		if (input == 4)
			break;
		else if (input == 1) {
			m[idx].num = idx;
			printf("제목 : ");
			scanf("\n%[^\n]s", m[idx].name);
			printf("가수 : ");
			scanf("\n%[^\n]s", m[idx].singer);
			printf("위치 : ");
			scanf("\n%[^\n]s", m[idx].location);
			printf("장르(0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악) : ");
			scanf("\n%d", &m[idx].genre);
			idx++;
			continue;
		}
		else if (input == 2) {
			for (int i = 0; i < idx; i++) {
				printf("번호 : %d\n", m[i].num);
				printf("제목 : %s\n", m[i].name);
				printf("가수 : %s\n", m[i].singer);
				printf("위치 : %s\n", m[i].location);
				printf("장르(0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악) : %d\n", m[i].genre);
				if (getch())
					continue;
			}
		}
		else if (input == 3) {
			printf("제목을 입력하시오 : ");
			scanf("\n%[^\n]s", search);
			for (int i = 0; i < idx; i++) {
				if (strcmp(search, m[i].name) == 0) {
					printf("번호 : %d\n", m[i].num);
					printf("제목 : %s\n", m[i].name);
					printf("가수 : %s\n", m[i].singer);
					printf("위치 : %s\n", m[i].location);
					printf("장르(0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악) : %d\n", m[i].genre);
				}
			}
			if (getch())
				continue;
		}
	}
}