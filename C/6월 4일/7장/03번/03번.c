#include<stdio.h>
int main()
{
	int i, d;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &i);
	d = 1;
	printf("��� : ");
	while (d <= i)
	{
		if (i%d == 0)
		{
			printf("%d ", d);
		}
		d++;
	}
	return 0;
}