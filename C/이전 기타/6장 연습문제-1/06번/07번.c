/*������, ��ü��*/

#include<stdio.h>
int main()
{
	int weight, hight;
	double standerd;

	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf("%d%d", &weight, &hight);

	standerd = (hight - 100)*0.9;

	if (weight > standerd)
		printf("��ü���Դϴ�.");
	else if (weight == standerd)
		printf("ǥ���Դϴ�.");
	else
		printf("��ü���Դϴ�.");

	return 0;
}