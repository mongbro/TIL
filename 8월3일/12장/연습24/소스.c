#include<stdio.h>
#include<string.h>
#include<ctype.h>

void try(char*geuss);			//추측한 글자를 작성하는 함수
void print_string(char*print_answer, char*geuss);			//문제 문자열에서 추측한 글자를 표시하는 함수

int count = 0;
char answer[100] = "paichai university";			//정답 문자열
int COUNT_TRY = sizeof(answer);

int main() {
	char print_answer[100] = { 0 };			//가려진 정답에서 추측에 성공한 문자만 보이는 배열
	char geuss;			//추측한 문자
	int end_con = 0;


		for (int i = 0; answer[i] != NULL; i++) {
			if (isalpha(answer[i]))
				print_answer[i] = '_';
			else
				print_answer[i] = answer[i];
		}
		printf("문자열 : %s\n", print_answer);
		while (1) {
		try(&geuss);
		print_string(print_answer, &geuss);

		//////////////////////////*종료 조건*//////////////////////////////

		if(strcmp(answer, print_answer)==0) {
			printf("성공하셨습니다!!");
			return 0;
		}
		if (count == COUNT_TRY) {
			printf("실패하셨습니다!!!");
			return 0;
		}
	}
}

void try(char* geuss) {
	if (count > COUNT_TRY)
		printf("\n횟수 초과!!\n");
	else {
		printf("글자를 추측하시오 : ");
		scanf("\n%c", geuss);
		count++;
	}
}

void print_string(char*print_answer, char* geuss) {
	for (int i = 0; answer[i] != NULL; i++) {
		if (answer[i]== *geuss)
			print_answer[i] = *geuss;
	}
	printf("문자열 : %s\n", print_answer);
}