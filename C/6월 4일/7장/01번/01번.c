#include<stdio.h>
int main()
{
	int c;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &c);
	while (c > 0)
	{
		printf("%d ", c);
		c--;
	}
	return 0;
}