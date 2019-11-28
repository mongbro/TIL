#include<stdio.h>

typedef struct student {
	int num;
	char* name;
	int grade;
}STU;

int main() {
	STU s[10], r[10];
	FILE* fp;
	int count = 0;
	
	fp = fopen("C:\\Users\\Mong_Bro\\source\\repos\\mongbro\\TIL\\C\\11월25일\\10\\student.dat", "rb");
	while (1) {
		fread(&s[count], sizeof(STU), 1, fp);
		if (feof(fp) != 0)
			break;
		count++;
	}
	fclose(fp);
	
	for (count; count < 10; count++) {
		s[count].num = count + 1;
		printf("이름 : ");
		scanf("%s", s[count].name);
		printf("점수 : ");
		scanf("%d", &s[count].grade);
	}
	
	fp = fopen("student2.dat", "wb");
	fwrite(s, sizeof(STU), 10, fp);
	fclose(fp);

	fp = fopen("student2.dat", "rb");
	for (int i = 0;; i++) {
		fread(&r[i], sizeof(STU), 1, fp);
		if (feof(fp) != 0)
			break;
	}
	fclose(fp);
	printf("\n\n\n");
	for (int i = 0; i < 10; i++) {
		printf("%d   %s  %d\n", r[i].num, r[i].name, r[i].grade);
	}
	return 0;
}