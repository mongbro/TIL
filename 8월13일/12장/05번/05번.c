#include<stdio.h>
#include<ctype.h>
int main() {
	char c=0;

	while (c != '.') {
		printf("���ڸ� �Է��Ͻÿ� : ");
		c = getchar();
		getchar();			//scanf("\n%c")���� \n�� ��Ȱ

		if (isupper(c)) {		//�빮�ڶ��
			c = tolower(c);		//�ҹ��ڷ�
			putchar(c);
		}
		else if (islower(c)) {		//�ҹ��ڶ��
			c = toupper(c);			//�빮�ڷ�
			putchar(c);
		}
		printf("\n");
	}
}