#include<stdio.h>
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	if (x > 0)
		printf("plus");
	else if (x == 0)
		printf("zero");
	else
		printf("minus");
	return 0;
}