#include<stdio.h>
int main()
{
	int input, ten, one;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &input);
	ten = input / 10;
	one = input % 10;
	printf("���� �ڸ� : %d\n���� �ڸ� : %d", ten, one);
	return 0;
}