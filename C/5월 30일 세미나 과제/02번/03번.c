#include<stdio.h>
int main()
{
	int n, i=1;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("��� : ");

	while (i <= n)
	{
		if (n%i == 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}