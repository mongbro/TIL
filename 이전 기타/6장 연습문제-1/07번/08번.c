/*�����̿�� ����*/

#include<stdio.h>
int main()
{
	int time, age;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð��� 24�ð�����) : ");
	scanf_s("%d%d", &time, &age);

	if (time > 24)
		printf("\n�Ϸ�� 24�ð��Դϴ�. 0~24�� �Է����ּ���.");
	else if (age < 3)
		printf("\n3�� �̸� �Ƶ��� ���̰����� �̿��� �� �����ϴ�.");
	else if (time < 17)
		if (age <= 12 || age >= 65)
			printf("\n����� 25,000�� �Դϴ�.");
		else
			printf("\n����� 34,000�� �Դϴ�.");
	else
		printf("\n����� 10,000�� �Դϴ�.");

	return 0;
}