#include<stdio.h>
#include"mong.h"
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("even()�� ��� : ");
	if (even(n) == 1)
		printf("¦��\n");
	else
		printf("Ȧ��\n");
	printf("absolute()�� ��� : %d\n", absolute(n));
	printf("sign()�� ��� : ");
	if (sign(n) == 1)
		printf("���");
	if (sign(n) == 0)
		printf("0");
	if (sign(n) == -1)
		printf("����");
	return 0;
}