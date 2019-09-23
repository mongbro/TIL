#include<stdio.h>

typedef struct student {
	int number;
	char name[12];
	double grade;
}stu;

stu get_max_stu(stu list[]);

int main() {
	stu list[5];
	stu best;

	for (int i = 0; i < 5; i++) {
		printf("��ȣ �Է� : ");
		scanf("\n%d", &list[i].number);
		printf("�̸� �Է� : ");
		scanf("\n%s", list[i].name);
		printf("���� �Է� : ");
		scanf("\n%lf", &list[i].grade);
	}

	best = get_max_stu(list);

	printf("������ ���� ���� �л��� (�̸� : %s, �й� : %d, ���� : %lf)�Դϴ�.\n", best.name, best.number, best.grade);

	return 0;
}

stu get_max_stu(stu list[]) {
	stu best = list[0];

	for (int i = 1; i < 5; i++) {
		if (best.grade < list[i].grade)
			best = list[i];
	}

	return best;
}