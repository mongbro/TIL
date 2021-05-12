#include<stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j <= i + 1; j++) 
			printf("*");
		for (int j = 4; j > i; j--) 
			printf(" ");
		for (int j = 5; j > i; j--)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j > i; j--)
			printf(" ");
		for (int j = 1; j <= i + 1; j++)
			printf("*");
		for (int j = 1; j < i + 1; j++)
			printf(" ");
		for (int j = 5; j > i; j--)
			printf("*");
		printf("\n");
	}
}