#include<stdio.h>
int main() {
	char str[100] = "C language is easy";
	int count = 0;

	while (str[count] != 0) {			//NULL�� �ƽ�Ű �ڵ尪�� 0 �̴�.
		count++;
	}
	printf("���ڿ� \"%s\"�� ���̴� %d�Դϴ�.", str, count);
}