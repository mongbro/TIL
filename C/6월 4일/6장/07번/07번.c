#include<stdio.h>
int main()
{
	double height, weight, standard;
	printf("ü�߰� Ű�� �Է��Ͻÿ� : ");
	scanf_s("%lf%lf", &weight, &height);
	standard = (weight - 100)*0.9;
	if (weight > standard)
		printf("��ü���Դϴ�.");
	else
		printf("��ü���Դϴ�.");
	return 0;
}