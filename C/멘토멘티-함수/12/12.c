#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_value(int n);

int main() {
	int n;

	while (1) {
		printf("입력(종료는 음수) : ");
		scanf("%d", &n);
		if (n < 0)
			break;
		print_value(n);
		printf("\n");
	}

}

void print_value(int n) {
	for (int i = 0; i < n; i++) {
		printf("*");
	}
}