#include<stdio.h>
int main()
{
	int n, i=1;
	
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("약수 : ");

	while (i <= n)
	{
		if (n%i == 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}