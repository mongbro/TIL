#include<stdio.h>
#include<string.h>
int main() {
	char fruits[3][100];		//3개의 과일을 입력받고 과일 이름은 최대 100문자이다.

	for (int i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오 : ");
		scanf("%s", fruits[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 과일 : %s\n", i + 1, fruits[i]);
	}
	return 0;
}