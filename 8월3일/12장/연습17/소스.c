#include<stdio.h>
#include<string.h>
int main() {
	char fruits[3][100];		//3���� ������ �Է¹ް� ���� �̸��� �ִ� 100�����̴�.

	for (int i = 0; i < 3; i++) {
		printf("���� �̸��� �Է��Ͻÿ� : ");
		scanf("%s", fruits[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° ���� : %s\n", i + 1, fruits[i]);
	}
	return 0;
}