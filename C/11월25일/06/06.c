#include<stdio.h>
#include<stdlib.h>

typedef struct strudent {
	int num;
	char* name;
	int grade;
}STU;

int main() {
	STU s[5], st;
	FILE* info = NULL;
	int n = 0;
	for (int i = 0; i < 5; i++) {
		s[i].num = i + 1;
		s[i].grade = rand() % 100;
	}
	s[0].name = "kim";
	s[1].name = "lee";
	s[2].name = "lim";
	s[3].name = "park";
	s[4].name = "choi";

	info = fopen("info.dat", "wb");

	for (int i = 0; i < 5; i++) {
		fwrite(&s[i], sizeof(STU), 1, info);
	}
	fclose(info);
	info = NULL;
	info = fopen("info.dat", "rb");

	while(1) {
		fread(&st, sizeof(STU), 1, info);
		if (feof(info) != 0)
			break;
		printf("번호 : %d, 이름 : %s, 점수 : %d\n", st.num, st.name, st.grade);

	}
	fclose(info);
	return 0;
}