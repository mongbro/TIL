#include<stdio.h>
#include<string.h>
#include<ctype.h>

void try(char*geuss);			//������ ���ڸ� �ۼ��ϴ� �Լ�
void print_string(char*print_answer, char*geuss);			//���� ���ڿ����� ������ ���ڸ� ǥ���ϴ� �Լ�

int count = 0;
char answer[100] = "paichai university";			//���� ���ڿ�
int COUNT_TRY = sizeof(answer);

int main() {
	char print_answer[100] = { 0 };			//������ ���信�� ������ ������ ���ڸ� ���̴� �迭
	char geuss;			//������ ����
	int end_con = 0;


		for (int i = 0; answer[i] != NULL; i++) {
			if (isalpha(answer[i]))
				print_answer[i] = '_';
			else
				print_answer[i] = answer[i];
		}
		printf("���ڿ� : %s\n", print_answer);
		while (1) {
		try(&geuss);
		print_string(print_answer, &geuss);

		//////////////////////////*���� ����*//////////////////////////////

		if(strcmp(answer, print_answer)==0) {
			printf("�����ϼ̽��ϴ�!!");
			return 0;
		}
		if (count == COUNT_TRY) {
			printf("�����ϼ̽��ϴ�!!!");
			return 0;
		}
	}
}

void try(char* geuss) {
	if (count > COUNT_TRY)
		printf("\nȽ�� �ʰ�!!\n");
	else {
		printf("���ڸ� �����Ͻÿ� : ");
		scanf("\n%c", geuss);
		count++;
	}
}

void print_string(char*print_answer, char* geuss) {
	for (int i = 0; answer[i] != NULL; i++) {
		if (answer[i]== *geuss)
			print_answer[i] = *geuss;
	}
	printf("���ڿ� : %s\n", print_answer);
}