#include<stdio.h>
int main()
{
	int weight, height;
	double standerd;
	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf_s("%d%d", &weight, &height);

	standerd = (height - 100)*0.9;

	if (weight >= standerd + 10)
		printf("��ü���Դϴ�.\n");
	else if (weight <= standerd - 10)
		printf("��ü���Դϴ�.\n");
	else
		printf("����ü���Դϴ�.\n");

	printf("ǥ��ü���� %lf�Դϴ�.", standerd);

	return 0;
}