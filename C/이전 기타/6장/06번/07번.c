#include<stdio.h>
int main()
{
	int hight, weight;
	double sweight;								//sweight = ǥ��ü��
	printf("ü�߰� Ű�� �Է��ϼ��� : ");
	scanf("%d%d", &weight, &hight);

	sweight = (hight - 100)*0.9;

	if (weight > sweight)
		printf("��ü���Դϴ�.");
	else
		printf("��ü���Դϴ�.");

	return 0;
}