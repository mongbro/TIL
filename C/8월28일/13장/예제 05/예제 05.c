#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s[3];

	for (int i = 0; i < 3; i++) {
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &s[i].number);
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", &s[i].name);
		printf("������ �Է��Ͻÿ� : ");
		scanf("%lf", &s[i].grade);
	}

	for (int i = 0; i < 3; i++) {
		printf("�й� : %d, �̸� : %s, ���� : %lf\n", s[i].number, s[i].name, s[i].grade);
	}
	return 0;
}