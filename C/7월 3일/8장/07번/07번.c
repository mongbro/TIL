#include<stdio.h>
#include"mong.h"
int get_tax(int n);
int main()
{
	int salary;
	printf("�ҵ��� �Է��Ͻÿ�(����) : ");
	scanf_s("%d", &salary);
	printf("�ҵ漼�� %d�Դϴ�.", get_tax(salary));
	return 0;
}