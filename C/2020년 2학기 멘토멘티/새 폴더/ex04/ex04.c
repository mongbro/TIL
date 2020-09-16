#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int get_random();

int main() {
	while (1) {
		if (_getch())
			printf("%d\n", get_random());
	}
}

int get_random() {
	static int inited = 0;
	if (inited == 0) {
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
	}
	inited++;
	return rand();
}