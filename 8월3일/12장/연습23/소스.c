#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cipher(char* input, char* output);				//��ȣȭ �Լ�
void decipher(char* input, char* output);			//��ȣȭ �Լ�
void menu();		//�޴�

int n;			//��ȣȭ or ��ȣȭ �����ϴ� ����

int main() {
	char input[100];
	char output[100] = { 0 };

	menu();
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("\n%[^\n]s", input);
	
	if (n == 1)
		cipher(input, output);
	else
		decipher(input, output);
	return 0;
}

void cipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {				//���ڿ��� ���������� �ݺ�
		if (input[i] >= 'A' && input[i] <= 'z') {			//�ش� ���ڰ� A���� z���̿� ������
			if (input[i] == 'x')			//�ҹ���xyz�� �ƽ�Ű�ڵ� + 3�� ���ĺ��� �ƴϹǷ� ���� �빮���� ù��°, �ι�°, ����°�� �ٲ۴�.
				output[i] = 'A';
			if (input[i] == 'y')
				output[i] = 'B';
			if (input[i] == 'z')
				output[i] = 'C';
			output[i] = input[i] + 3;			//A���� w������ ���ĺ����� �ش� ���ĺ��� �ƽ�Ű�ڵ� + 3���� �ٲ۴�.
		}
		else
			output[i] = input[i];			//���ĺ��� �ƴ� ���ڴ� ���� �״�� ��������.
	}
	printf("��ȣȭ�� ���ڿ� : %s", output);
}

void decipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {
		if (input[i] >= 'A'+3 && input[i] <= 'z'+3) {
			if (input[i] == 'A')			//�빮��ABC�� ��ȣȭ�ɶ� �ҹ��� xyz�����Ƿ� ���� x,y,z�� �ٱ���.
				output[i] = 'x';
			if (input[i] == 'B')
				output[i] = 'y';
			if (input[i] == 'C')
				output[i] = 'z';
			output[i] = input[i] - 3;			//���ĺ��� �ƴ� ���ڴ� ���� �״�� ��������.
		}
		else
			output[i] = input[i];
	}
	printf("��ȣȭ�� ���ڿ� : %s", output);
}

void menu() {
	while (1) {
		printf("1. ��ȣȭ        2. ��ȣȭ       ");
		scanf("%d", &n);
		if (n == 1 || n == 2)					//�����Ѱ� 1�̳� 2�� �ƴϸ� ���ѹݺ��Ѵ�.
			break;
		else
			printf("\n�߸��� ��ȣ�Դϴ�.\n\n\n");
	}
}