#include<stdio.h>
int main()
{
	int number;
	char var;
	printf("�Է�");
	scanf_s("%d", &number);
	
	if (number > 0)
		var = 'p';
	else if (number < 0)
		var = 'm';
	else
		var = 'z';
		
	switch (var)
	{
	case 'p':
		printf("����Դϴ�.");
		break;
	case 'm':
		printf("�����Դϴ�.");
		break;
	case 'z':
		printf("0�Դϴ�.");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.");
		break;
	}
	return 0;
}