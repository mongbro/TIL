/*���и�����*/

#include<stdio.h>
int main()
{
	int x, y;
	printf("(x, y)�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1��и�");
		else
			printf("4��и�");
	else if (y > 0)
		printf("2��и�");
	else
		printf("3��и�");

	return 0;
}