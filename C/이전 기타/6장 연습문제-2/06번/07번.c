#include<stdio.h>
int main()
{
	int weight, height;
	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf_s("%d %d", &weight, &height);

	if ((height - 100)*0.9 < weight)
		printf("��ü���Դϴ�.");
	else if ((height - 100)*0.9 == weight)
		printf("����ü���Դϴ�.");
	else
		printf("��ü���Դϴ�.");

	return 0;
}