#include<stdio.h>

int main() {
	char str1[] = "The worst things to eat before you sleep\0";
	char str2[100];
	int n = 0;
	for (int i = 0; i < 100; i++) {		//str1�� str2�� ����
		str2[i] = str1[i];
	}
	printf("���� ���ڿ� : ");
	printf(str1);						//���ڿ� ��¹�1
	printf("\n���� ���ڿ� : ");
	while (str2[n] != '\0') {
		printf("%c", str2[n]);			//���ڿ� ��¹�2
		n++;
	}
}