#include<stdio.h>
#include"mong.h"
int f_count(int n);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("�ڸ����� ���� : %d", f_count(n));
	return 0;
}