#include<stdio.h>
int main()
{
	int x, y;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	if (x%y == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�.");
	return 0;
}