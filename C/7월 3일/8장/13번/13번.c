#include<stdio.h>
#include"mong.h"
int is_multiply(int a, int b);
int main()
{
	int x, y, result;
	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &y);
	result = is_multiply(x, y);
	if (result == 1)
		printf("%d�� %d�� ����Դϴ�.", x, y);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", x, y);
	return 0;
}