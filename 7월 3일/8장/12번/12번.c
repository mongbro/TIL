#include<stdio.h>
#include"mong.h"
void print_value(int n);
int main()
{
	int n;
	do
	{
		printf("���� �Է��Ͻÿ�(����� ����) : ");
		scanf_s("%d", &n);
		print_value(n);
		printf("\n");
	}while (n > 0);
	return 0;
}