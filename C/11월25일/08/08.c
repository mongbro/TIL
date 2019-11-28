#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct student {
	int num;
	char name[5];
	double grade;
}STU;

int main() {
	STU s[5], d[5];
	FILE* info = NULL;
	int count = 0, da;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		s[i].num = i + 1;
		s[i].grade = (double)(rand() % 450) / 100;
	}
	strcpy(s[0].name, "kim");
	strcpy(s[1].name, "lee");
	strcpy(s[2].name, "lim");
	strcpy(s[3].name, "park");
	strcpy(s[4].name, "choi");

	info = fopen("info.dat", "wb");

	if (info == NULL) {
		fprintf(stderr, "파일 열기 실패");
		exit(1);
	}

	fwrite(s, sizeof(STU), 5, info);
	fclose(info);
	info = fopen("info.dat", "rb");

	if (info == NULL) {
		fprintf(stderr, "파일 열기 실패");
		exit(1);
	}

	while (1) {
		fread(&d[count], sizeof(STU), 1, info);
		if (feof(info) != 0)
			break;
		printf("번호 : %d  이름 : %-4s   학점 : %.2lf\n", d[count].num, d[count].name, d[count].grade);
		count++;
	}
	fclose(info);
	return 0;
}