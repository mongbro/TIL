#include<stdio.h>
int main()
{
	int n;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	while (n >= 1)
	{
		printf("%d ", n);
		n--;
	}
	printf("\a");
	return 0;
}