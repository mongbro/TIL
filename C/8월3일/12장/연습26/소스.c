#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

void decide_solution(char soluton_list[][100], char solution[]);

int main() {
	char solution_list[5][100] = {
		"my name is kim",
		"paichai university",
		"string tokenizeing",
		"visual studio",
		"microsoft mobile"
	};
	char solution[100] = { 0 };
	char answer[100] = { 0 };
	char geuss;
	int limit = 15;
	int count = 0;
	int num_correct = 0;
	int num_solution = 0;

	decide_solution(solution_list, solution);

	for (int i = 0; solution[i] != NULL; i++) {
		if (isalpha(solution[i]))
			num_solution++;
		if (isspace(solution[i]))
			num_solution++;
	}

 	for (int i = 0; solution[i] != NULL; i++) {
		if (isalpha(solution[i]))
			answer[i] = '_';
		else
			answer[i] = solution[i];
	}

	while (1) {
		printf("���ڿ� : %s\n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		scanf("\n%c", &geuss);
		count++;

		for (int i = 0; solution[i] != NULL; i++) {
			if (solution[i] == geuss)
				answer[i] = solution[i];
		}

		/////////////	��������	////////////////

		if(strcmp(answer, solution)==0){
			printf("���ڿ� : %s\n", answer);
			printf("/////////////  ���� �¸�  /////////////");
			return 0;
		}

		if (count == limit) {
			printf("/////////////  ���� ����  /////////////");
			return 0;
		}
	}
}

void decide_solution(char solution_list[][100], char solution[]) {
	srand((unsigned)time(NULL));
	int ran = rand() % 5;
	strcpy(solution, solution_list[ran]);		//solution=solution_list[ran] ���� �ۼ��ϸ� ������ �ٲ��� ������ strcpy�Լ��� �Ű������� �����ͷ� �Ǿ��־ ������ �ٲ��.
 }