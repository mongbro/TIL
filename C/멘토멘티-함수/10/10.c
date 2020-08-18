#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int b_rand();

int main() {
	srand((unsigned)time(NULL));
	int a;
	char c;
	while (1) {
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf("%d", &a);
		
		if (a == b_rand())
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf("\n%c", &c);
		if (c == 'n')
			break;
	}
}

int b_rand() {
	return rand() % 2;
}