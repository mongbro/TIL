#include<stdio.h>
#include<stdlib.h>
int main() {
	char str1[] = "100";			//100�̶�� ���ڸ� ���ڿ��� ����
	char str2[] = "12.93";		//12.93�̶�� ���ڸ� ���ڿ��� ����
	char buffer[100];				//������� ���ڸ� ������ ���ڿ�
	int i;									//str1 ���ڿ��� ���������� �ٲپ� ������ ����
	double d, result;				//str2 ���ڿ��� �Ǽ������� �ٲپ� ������ ����, �� ���� ��

	i = atoi(str1);						//str1���ڿ��� ���������� �ٲپ� i�� ����
	d = atof(str2);					//str2���ڿ��� �Ǽ������� �ٲپ� d�� ����
	result = i + d;

	sprintf(buffer, "%f", result);			//�Ǽ��� result�� buffer���ڿ��� ����
	printf("������ : %s", buffer);		//���ڿ�buffer ���
	return 0;
}