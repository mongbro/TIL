#include<stdio.h>
int main()
{
	int input;
	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf("%x", &input);
	printf("8�����δ� %#o�Դϴ�.\n", input);
	printf("10�����δ� %d�Դϴ�.\n", input);
	printf("16�����δ� %#x�Դϴ�.", input);
	return 0;
}