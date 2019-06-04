#include<stdio.h>
int main()
{
	int i, d;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &i);
	d = 1;
	printf("약수 : ");
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