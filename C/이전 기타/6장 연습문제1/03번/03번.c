#include<stdio.h>
int main()
{
	int x, y, z;
	
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &x, &y, &z);

	if (x < y)
		if (x < z)
			printf("���� ���� ������ %d�Դϴ�.", x);
		else
			printf("���� ���� ������ %d�Դϴ�.", z);
	else if(y<z)
		printf("���� ���� ������ %d�Դϴ�.", y);
	else
		printf("���� ���� ������ %d�Դϴ�.", z);
	return 0;
}