#include<stdio.h>
#include"mong.h"

int main() {
	int pw, result;

	while (1) {
		if (count < 3) {
			printf("비밀번호 : ");
			scanf("%d", &pw);
			result = check(pw);
			if (result == 0) 
				printf("실패\n");
			else{
				printf("성공\n");
				break;
			}
		}
		else {
			printf("로그인 시도횟수 초과");
			break;
		}
	}
}