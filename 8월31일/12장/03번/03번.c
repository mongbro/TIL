#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[50];
	char c;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, sizeof(s));

	printf("������ �� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);

	printf("%d\n", sizeof(s));
	printf("%s���� %c�� ���� : %d", s, c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;
	for (int i = 0; i< strlen(s); i++) {					//  ������ sizeof(s) �� �ϸ� ù��°���� �׹�°���� 4���� �д´�.		�����ͺ����� ũ�Ⱑ 4����Ʈ�̱⶧��
																				//  �������� sizeof(s) �� 50�� ���� ������ s�� char�� �迭�̱� �����̴�.		���⼭��  �������� �����̴�.
		if (s[i] == c)
			n++;
	}

	return n;
}