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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf("%d", &a);
		
		if (a == b_rand())
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
		scanf("\n%c", &c);
		if (c == 'n')
			break;
	}
}

int b_rand() {
	return rand() % 2;
}