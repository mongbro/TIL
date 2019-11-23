#include<stdio.h>

typedef struct employee {
	int num;
	char name[20];
	char phone[15];
	int age;
}EMP;

int main() {
	EMP e[10];
	for (int i = 0; i < 10; i++) {
		printf("이름 : ");
		scanf("%s", e[i].name);
		printf("나이 : ");
		scanf("%d", &e[i].age);
	}
	for (int i = 0; i < 10; i++) {
		if (e[i].age >= 20 && e[i].age <= 30)
			printf("%s  ", e[i].name);
	}
}