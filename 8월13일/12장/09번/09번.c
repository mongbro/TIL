#include<stdio.h>
#include<string.h>
#include<ctype.h>

void check_first(char* str);
void check_last(char* str);

int main() {
	char str[100] = { 0 };

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", str);

	check_first(str);
	check_last(str);
	printf("������ �ؽ�Ʈ : %s", str);
	return 0;
}

void check_first(char* str) {
	if (islower(str[0]))
		str[0] = toupper(str[0]);
}

void check_last(char* str) {
	if (str[strlen(str) - 1] != '.')
		strcat(str, ".");				//strcat�� �Ű������� (�������ڿ�, �߰��� ���ڿ�) �̹Ƿ� s2���� ���� '.' �� �ƴ϶� ���ڿ� "." �� �־���Ѵ�.
}