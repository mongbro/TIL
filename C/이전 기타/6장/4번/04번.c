#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int input, computer;
	
	printf("�����Ͻÿ�(1=����, 2=����, 3=��) : ");
	scanf("%d", &input);

	srand((unsigned)time(NULL));
	computer = rand()%3+1;

	printf("\n��ǻ���� ������ %d�Դϴ�.(1=����, 2=����, 3=��)\n\n", computer);

	if (input - computer == 1 || input - computer == -2)
		printf("����ڰ� �̰���");
	else if (input - computer == -1 || input - computer == 2)
		printf("��ǻ�Ͱ� �̰���");
	else
		printf("�����");

	return 0;
}