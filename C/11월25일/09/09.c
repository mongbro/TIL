#include<stdio.h>
#include<stdlib.h>

typedef struct student {
	int num;
	char name[5];
	double grade;
}STU;

int main() {
	STU s[10], c[10];
	FILE* info = NULL, *info1 = NULL;
	int count = 0, check = 0;

	info = fopen("info.dat", "rb");

	if (info == NULL) {
		fprintf(stderr, "���� ���� ����");
		exit(1);
	}

	while(1) {
		fread(&s[count], sizeof(STU), 1, info);
		if (feof(info) != 0)
			break;
		printf("%d   %-4s   %.2lf\n", s[count].num, s[count].name, s[count].grade);
		count++;
	}
	fclose(info);

	for (int i = 5; i < 10; i++) {
		s[i].num = i + 1;
		printf("�̸� : ");
		scanf("%s", s[i].name);
		printf("���� : ");
		scanf("%lf", &s[i].grade);
	}

	info1 = fopen("info1.dat", "wb");

	fwrite(s, sizeof(STU), 10, info1);
	fclose(info1);
	printf("\n\n");
	info1 = fopen("info1.dat", "rb");

	if (info1 == NULL) {
		fprintf(stderr, "���� ���� ����");
		exit(1);
	}

	while (1) {
		fread(&c[check], sizeof(STU), 1, info1);
		if (feof(info1) != 0)
			break;
		printf("��ȣ : %2d   �̸� : %-4s   ���� : %.2lf\n", c[check].num, c[check].name, c[check].grade);
		check++;
	}
	fclose(info1);
	return 0;
}