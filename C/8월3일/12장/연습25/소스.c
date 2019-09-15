#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

void select_sol(char sol[][100], char solution[]);
void check(char* solution, char* geuss, char* print_sol);

int main() {
	char sol[5][100] =
	{ "my name is jongeun",
	"what is your name",
	"how are you",
	"i am a student",
	"paichai university" };
	char solution[100];
	char geuss;
	char print_sol[100] = { 0 };
	int limit = 15;
	int try = 0;
	int size_sol=0;
	int correct;

	select_sol(sol, solution);			//여러가지 배열중에 정답이 될 답을 하나만 난수로 고른다.

	for (int i = 0; solution[i] != NULL; i++) {
		size_sol++;
	}

	for (int i = 0; solution[i]!=NULL; i++) {
		if (isalpha(solution[i]))
			print_sol[i] = '_';
		else
			print_sol[i] = solution[i];
	}

	while (1) {
		correct = 0;

		printf("문자열 : %s\n", print_sol);
		printf("문자를 추측하시오 : ");
		scanf("\n%c", &geuss);

		check(solution, geuss, print_sol);
		try++;
		printf("시도횟수 : %d\n", try);
///////////////////////////종료조건///////////////////////////////

		if (strcmp(solution, print_sol)==0) {
			printf("\n******************게임 클리어!!******************");
			return 0;
		}
		if (try == limit) {
			printf("\n******************게임 오버******************");
			return 0;
		}
	}
}

void select_sol(char sol[][100], char solution[]) {
	srand((unsigned)time(NULL));
	int ran = rand() % 5;
	strcpy(solution, sol[ran]);
}

void check(char* solution, char* geuss, char* print_sol) {
	for (int i = 0; solution[i] != NULL; i++) {
		if (solution[i] == geuss) {
			print_sol[i] = geuss;
		}
	}
}