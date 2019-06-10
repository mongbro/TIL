#include<stdio.h>
int main()
{
	int n, i;
	printf("Á¤¼ö : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		i = n % 10;
		n /= 10;
		printf("%d", i);
	}
	return 0;
}