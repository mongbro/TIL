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

	select_sol(sol, solution);			//�������� �迭�߿� ������ �� ���� �ϳ��� ������ ����.

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

		printf("���ڿ� : %s\n", print_sol);
		printf("���ڸ� �����Ͻÿ� : ");
		scanf("\n%c", &geuss);

		check(solution, geuss, print_sol);
		try++;
		printf("�õ�Ƚ�� : %d\n", try);
///////////////////////////��������///////////////////////////////

		if (strcmp(solution, print_sol)==0) {
			printf("\n******************���� Ŭ����!!******************");
			return 0;
		}
		if (try == limit) {
			printf("\n******************���� ����******************");
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