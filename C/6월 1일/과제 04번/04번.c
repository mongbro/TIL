#include<stdio.h>
int main()
{
	int con;
	
	do
	{
		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
		scanf_s("%d", &con);
		switch (con)
		{
		case 1:
			printf("\nSeoul\n\n");
			break;
		case 2:
			printf("\nWashington\n\n");
			break;
		case 3:
			printf("\nTokyo\n\n");
			break;
		case 4:
			printf("\nBeijing\n\n");
			break;
		default:
			printf("\nnone\n\n");
			break;
		}
	} while (con == 1 || con == 2 || con == 3 || con == 4);
		return 0;
}