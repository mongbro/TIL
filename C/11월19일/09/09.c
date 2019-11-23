#include<stdio.h>

typedef struct food {
	char name[100];
	int calories;
}FOOD;

int main() {
	FOOD f[3];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		printf("À½½Ä ÀÌ¸§ : ");
		scanf("%s", f[i].name);
		printf("Ä®·Î¸® : ");
		scanf("%d", &f[i].calories);
		sum += f[i].calories;
	}
	printf("ÃÑ %dÄ®·Î¸® ¼·Ãë", sum);
}