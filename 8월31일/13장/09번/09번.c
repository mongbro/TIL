#include<stdio.h>
#include<string.h>

struct food {
	char name[100];
	int calories;
};

int main() {
	struct food f[10] = { {"사과", 100}, {"라면", 500}, {"김치", 200}, {"귤", 100}, {"치킨", 700}, {"족발", 700}, {"자장면", 700}, {"탕수육", 900}, {"복숭아", 100}, {"피자", 700} };
	char name_f[3][100];
	char c[100];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		printf("%s   :   %d\n", f[i].name, f[i].calories);
	}

	for (int i = 0; i < 3; i++) {
		printf("음식 이름 : ");
		gets_s(c, sizeof(c));
		strcpy(name_f[i], c);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			if (strcmp(f[i].name, name_f[j])==0)
				sum += f[i].calories;
		}
	}

	printf("총 칼로리 : %d", sum);
}