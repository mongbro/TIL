#include<stdio.h>
int main()
{
	int n;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = n; i > 0; i--)
		printf("%d ", i);
	printf("\a");
	return 0;
}
