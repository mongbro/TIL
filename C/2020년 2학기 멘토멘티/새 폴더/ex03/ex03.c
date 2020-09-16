#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PW 1234

int check();

int main() {
	while (1) {
		if (check() == 1) {
			printf("로그인 성공");
			break;
		}
	}
}

int check() {
	static int count = 0;
	int pw;
	if (count == 3) {
		printf("로그인 시도횟수 초과\n");
		return 1;
	}
	printf("비밀번호 : ");
	scanf("%d", &pw);

	if (pw == PW)
		return 1;
	else {
		count++;
		return 0;
	}
}