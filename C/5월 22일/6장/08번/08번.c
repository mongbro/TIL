#include<stdio.h>
int main()
{
	int age, time;
	printf("����ð��� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &time, &age);

	if (time > 24)
		printf("�Ϸ�� 24�ð�");
	else if (time > 17)
		printf("����� 10,000�� �Դϴ�.");
	else if ("age>=65||age<=12||age>=3")
		printf("����� 25,000�� �Դϴ�.");
	else
		printf("����� 34,000�� �Դϴ�.");
	return 0;
}