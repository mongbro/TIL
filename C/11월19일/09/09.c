#include<stdio.h>

typedef struct food {
	char name[100];
	int calories;
}FOOD;

int main() {
	FOOD f[3];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		printf("���� �̸� : ");
		scanf("%s", f[i].name);
		printf("Į�θ� : ");
		scanf("%d", &f[i].calories);
		sum += f[i].calories;
	}
	printf("�� %dĮ�θ� ����", sum);
}