#include<stdio.h>
int main()
{
	int time, age;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð��� 24�ð������� ǥ��) : ");
	scanf("%d%d", &time, &age);

	if (time > 24)
		printf("��Ȯ�� �ð��� �Է��ϼ���");
	else if (time > 17)
		printf("����� 10,000�� �Դϴ�.");
	else if (age < 3)
		printf("3�� �̸��� ���̰��� ���Ա���");
	else if (age >= 65 || age <= 12)
		printf("����� 25,000�� �Դϴ�.");
	else
		printf("����� 34,000�� �Դϴ�.");

	return 0;
}