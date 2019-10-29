#include<stdio.h>

int main() {
	for (int i = 0; i < 9; i++) {
		if (i < 5) {
			for (int j = 4; j > i; j--) {
				printf(" ");
			}
			for (int j = 0; j <= i; j++) {
				printf("*");
			}
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = 5; j <= i; j++) {
				printf(" ");
			}
			for (int j = 8; j >= i; j--) {
				printf("*");
			}
			for (int j = 8; j > i; j--) {
				printf("*");
			}
			printf("\n");
		}
	}
}