#include<stdio.h>
int main()
{
	int input, ten;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &input);
	ten = input / 10;
	input %= 10;
	printf("���� �ڸ� : %d\n���� �ڸ� : %d", ten, input);
	return 0;
}