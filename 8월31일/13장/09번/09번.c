#include<stdio.h>
#include<string.h>

struct food {
	char name[100];
	int calories;
};

int main() {
	struct food f[10] = { {"���", 100}, {"���", 500}, {"��ġ", 200}, {"��", 100}, {"ġŲ", 700}, {"����", 700}, {"�����", 700}, {"������", 900}, {"������", 100}, {"����", 700} };
	char name_f[3][100];
	char c[100];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		printf("%s   :   %d\n", f[i].name, f[i].calories);
	}

	for (int i = 0; i < 3; i++) {
		printf("���� �̸� : ");
		gets_s(c, sizeof(c));
		strcpy(name_f[i], c);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			if (strcmp(f[i].name, name_f[j])==0)
				sum += f[i].calories;
		}
	}

	printf("�� Į�θ� : %d", sum);
}