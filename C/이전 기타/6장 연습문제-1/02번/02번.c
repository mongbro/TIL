/*����� ���ϴ� ���α׷�*/

#include<stdio.h>
int main()
{
	int input1, input2;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input1);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input2);

	if (input1%input2 == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�.");

	return 0;
}