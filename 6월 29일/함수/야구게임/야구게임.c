#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int strike_zone();
int main()
{
	int user1, user2, user3, pc1, pc2, pc3;
	int strike, ball;
	do
	{
		strike = 0;
		ball = 0;
		printf("0���� 9������ �� 3���� �ߺ����� ���ÿ�(�����Ϸ��� -1�� �Է�) : ");
		scanf_s("%d%d%d", &user1, &user2, &user3);
		srand((unsigned)time(NULL));
		pc1 = strike_zone();
		pc2 = strike_zone();
		while (pc1 == pc2)
		{
			pc2 = strike_zone();
		}
		pc3 = strike_zone();
		while (pc1 == pc3)
		{
			pc3 = strike_zone();
		}
		while (pc2 == pc3)
		{
			pc3 = strike_zone();
		}
		printf("%d %d %d     ", pc1, pc2, pc3);
		if (user1 == pc1)
			strike++;
		else if (user1 == pc2 || user1 == pc3)
			ball++;
		if (user2 == pc2)
			strike++;
		else if (user2 == pc1 || user2 == pc3)
			ball++;
		if (user3 == pc3)
			strike++;
		else if (user3 == pc1 || user3 == pc2)
			ball++;
		printf("%d��Ʈ����ũ %d��\n", strike, ball);
	} while (1);
}
int strike_zone()
{
	int a;
	a = rand() % 9;
	return a;
}