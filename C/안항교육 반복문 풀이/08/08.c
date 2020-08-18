#include<stdio.h>

int main() {
	int input;
	while (1) {
		printf("막대의 높이(종료 : -1) >> ");
		scanf("\n%d", &input);

		if (input == -1)
			break;

		for (int i = 0; i < input; i++)
			printf("*");
		printf("\n");
	}
}