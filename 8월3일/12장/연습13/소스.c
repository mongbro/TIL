#include<stdio.h>
int main() {
	char str1[] = "100 200 300";
	char str2[30];
	double value;
	sscanf_s(str1, " %d", &value);		//value�� ��ġ�� ��ȯ�ؼ� �־���.
	printf("%d\n", value);					//�̹� ��ġ�� �ٲ�������ϱ� �������
	sprintf_s(str2, sizeof(str2), "%d", value);		//str2�� value�� �־���.
	printf("%s\n", str2);											//��ġ�� ��ȯ���� �ʾ����Ƿ� ���ڿ����
}