#include<stdio.h>

void check_alpha(char a);

int main() {
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &a);
	check_alpha(a);
	return 0;
}

void check_alpha(char a) {
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
		printf("%c�� ���ĺ��Դϴ�.", a);
	else
		printf("%c�� ���ĺ��� �ƴմ�.", a);
}