/*x�� y���� �Է¹޾� x << y�� ���� ����ϴ� ���α׷�*/
#include<stdio.h>
void main()
{
	int x, y, x_to_y;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf("%d", &y);

	x_to_y = x << y;

	printf("%d<%d�� �� : %d", x, y, x_to_y);
	return 0;
}