#include<stdio.h>
#include<string.h>
int main() {
	char str[100] = "Hello world! ";
	strcat_s(str, sizeof(str), "My name is ");		//strcat�� �Ű������� (���� ���ڿ�, ���ڿ��� ���� ũ��, �޺κ��� ���� ���ڿ�)
	strcat_s(str, sizeof(str), "Kim JongEun\n\n");	//						str				sizeof(str)			�߰��κ�
	printf(str);
}