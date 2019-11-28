#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
	char num[3];
	char name[20];
	char grade[4];
}ST;

int main() {
	FILE* info = NULL;
	ST s[5], r[5];
	

	strcpy(s[0].num, "1");
	strcpy(s[1].num, "2");
	strcpy(s[2].num, "3");
	strcpy(s[3].num, "4");
	strcpy(s[4].num, "5");

	strcpy(s[0].grade, "100");
	strcpy(s[1].grade, "90");
	strcpy(s[2].grade, "80");
	strcpy(s[3].grade, "70");
	strcpy(s[4].grade, "60");

	strcpy(s[0].name, "kim");
	strcpy(s[1].name, "lim");
	strcpy(s[2].name, "lee");
	strcpy(s[3].name, "park");
	strcpy(s[4].name, "min");

	info = fopen("info.txt", "w");

	if (info == NULL) {
		fprintf(stderr, "파일 열기 실패", info);
		exit(1);
	}
	else {
		for (int i = 0; i < 5; i++) {
			fprintf(info, "%s, %s, %s\n", s[i].num, s[i].name, s[i].grade);
		}
	}
	
	fclose(info);
	return 0;
}