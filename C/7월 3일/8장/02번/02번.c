#include<stdio.h>
#include"check.h"					//check_alpha �Լ��� ������ �ִ� �������

int check_alpha(char a);			//char a�� �˻��ؼ� ���ĺ��̸� 1�� ��ȯ, �ƴϸ� 0�� ��ȯ�ҰŴ�.

int main()
{
	char a;
	int result;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a, 1);
	result = check_alpha(a);
	if (result == 1)
		printf("%c�� ���ĺ� ���� �Դϴ�.", a);
	else
		printf("%c�� ���ĺ��� �ƴմϴ�.", a);
	return 0;
}