#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_alpha(char a);

int main() {
	char c;

	printf("�Է� : ");
	scanf("%c", &c);

	if (check_alpha(c))
		printf("%c�� ���ĺ��Դϴ�.", c);
	else
		printf("%c�� ���ĺ��� �ƴմϴ�.", c);
}

int check_alpha(char a) {
	for (int i = 0; i < 28; i++) {
		if (a == 'a' + i)
			return 1;
	}
	return 0;
}