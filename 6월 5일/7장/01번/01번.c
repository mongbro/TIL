#include<stdio.h>
int main()
{
	int counter;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &counter);
	while (counter >= 1)
	{
		printf("%d ", counter);
		counter--;
	}
	return 0;
}