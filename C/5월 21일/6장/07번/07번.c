/*ǥ��ü��*/

#include<stdio.h>
int main()
{
	int weight, height, standerd;
	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf_s("%d%d", &weight, &height);

	standerd = (height - 100)*0.9;

	if (weight > standerd + 10)
		printf("��ü���Դϴ�.");
	else if (weight < standerd - 10)
		printf("��ü���Դϴ�.");
	else
		printf("����ü���Դϴ�.");
	return 0;
}