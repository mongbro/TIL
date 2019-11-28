#include<stdio.h>

typedef struct student {
	int num;
	char* name;
	double grade;
}STU;

int main() {
	STU s[5] = {
		{1,"kim",45.84},
		{2,"lee",68.14},
		{3,"lim",14.84},
		{4,"park",16.65},
		{5,"choi",15.68}
	};
	STU d;
	FILE* info;
	info = fopen("info.dat", "wb");

	fwrite(s, sizeof(STU), 5, info);
	fclose(info);
	info = fopen("info.dat", "rb");
	while (1) {
		fread(&d, sizeof(STU), 1, info);
		if (feof(info) != 0)
			break;
		printf("학번 : %d, 이름 : %s, 학점 : %.2lf\n", d.num, d.name, d.grade);
	}
	fclose(info);
	return 0;
}