#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char* str);

int main() {
	char str[100] = { 0 };

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str, sizeof(str));				//scanf()�� ����ҰŸ� %[^\n]s�� �Է��ؾ��ϴµ� �������ϱ� �����ϴ���� gets_s�� ��Ȱȭ ����

	if (check(str) == 1)
		printf("ȸ���Դϴ�.");
	else
		printf("ȸ���� �ƴմϴ�.");
}

int check(char* str) {
	for (int i = 0; str[i] != NULL; i++) {			//���� �ҹ��ڷ� �ٲٱ�
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == str[strlen(str) - i-1])						//���ڿ� �� �տ������Ϳ� �� �ڿ������� �ϳ��� ���̰� �ٿ����鼭 ���Ѵ�.
																						//str[i]�� 0���� �ϳ��� ����	
																						//	str[strlen(str) - i - 1]�� ������ �ϳ��� ����(str[strlen(str) - 1]�� �� �������̴ϱ� - i �� �߰��Ѵ�.) *************
			continue;				//���� �ΰ��� ������ ���
		else
			return 0;				//�ٸ��� 0��ȯ
	}
	return 1;							//������ �� �������� 1��ȯ
}