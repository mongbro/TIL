#include<stdio.h>
#include<string.h>
#include<ctype.h>

int get_response(char* prompt);

int main() {
	char prompt[10];
	int result;

	printf("����? ");
	scanf("%s", prompt);

	result = get_response(prompt);

	if (result == 1)
		printf("�������� �亯");
	else if (result == 0)
		printf("�������� �亯");
	else
		printf("�˼�����");

	return 0;
}

int get_response(char* prompt) {
	char posi[2][10] = { "yes", "ok" };
	char naga[10] = "no";				//10ĭ �޸� �ȿ� n	o \0	    x	x	x	x	x	x	x  10���� ����־ ������ �ʱ�ȭ�� �ȵȴٰ� ���´�(x = �����Ⱚ)

	for (int i = 0; prompt[i] != NULL; i++) {
		if (isupper(prompt[i]))
			prompt[i] = tolower(prompt[i]);			//���� �ҹ��ڷ� �ٲٱ�
	}

	if (strcmp(prompt, posi[0]) == 0 || strcmp(prompt, posi[1]) == 0)
		return 1;
	else if (strcmp(prompt, naga) == 0)
		return 0;
	else
		return 2;
}