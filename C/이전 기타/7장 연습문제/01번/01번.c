#include<stdio.h>
int main()
{
	int x;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	for (; x > 0; x--)
		printf("%d  ", x);
	printf("\a");
	return 0;
}