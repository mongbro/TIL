#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char input[100];
	char output[100] = { 0 };	
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", input);			//���͸� ������ ��� ���ڸ� �Է¹޴´�.			���ڿ��� ������ -> &�ʿ� ����

	for (int i = 0; input[i] != NULL; i++) {		//���ڿ��� ���������� �ݺ�
		if (isalpha(input[i]))									//�ش� ���ڰ� ���ĺ��϶�
			output[i] = input[i] + 3;							//�ش� ���ĺ��� �ƽ�Ű�ڵ�+3
		else
			output[i] = input[i];								//���ĺ��� �ƴϸ� �������� �״�� ��������
	}
	printf("��ȣȭ�� ���ڿ� : %s", output);
	return 0;
}