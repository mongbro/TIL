#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cipher(char* input, char* output);

int main() {
	char input[100];
	char output[100] = { 0 };
	printf("���ڿ��� �Է��Ͻÿ� : ");			
	scanf("%[^\n]s", input);			//���͸� ������ ��� ���ڸ� �Է¹޴´�.
	cipher(input, output);
	printf("��ȣȭ�� ���ڿ� : %s", output);
	return 0;
}

void cipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {			//���ڿ��� ���������� �ݺ�
		if (input[i] >= 'A' && input[i] <= 'z')			//�ش� ���ڰ� �ƽ�Ű�ڵ�� �빮��A���� �ҹ���z ���̿� ������(���ĺ��϶�)
			output[i] = input[i] + 3;								//�ش� ������ �ƽ�Ű�ڵ�+3
		else
			output[i] = input[i];									//���ĺ��� �ƴϸ� �������� �״�� �����´�.
	}
}