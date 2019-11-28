#include<stdio.h>

typedef struct student {
	int num;
	char* name;
	int grade;
}STU;

int main() {
	STU s[5];
	FILE* fp = NULL;
	for (int i = 0; i < 5; i++) {
		s[i].num = i + 1;
		s[i].grade = i;
	}
	s[0].name = "kim";
	s[1].name = "lee";
	s[2].name = "lim";
	s[3].name = "park";
	s[4].name = "choi";

	fp = fopen("student.dat", "wb");
	fwrite(s, sizeof(STU), 5, fp);
	fclose(fp);
	fopen("student.dat", "rb");
	while (1) {
		fread(s, sizeof(STU), 5, fp);
		if (feof(fp) != 0)
			break;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d   %-4s  %d\n", s[i].num, s[i].name, s[i].grade);
	}
	fclose(fp);
	return 0;
}