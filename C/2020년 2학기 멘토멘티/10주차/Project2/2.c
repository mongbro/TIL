#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
	int number;
	char name[10];
	int age;
}E;

int main()
{
	E list[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		list[i].number = i + 1;
		strcpy(list[i].name, "ȫ�浿");
		list[i].age = rand() % 50;
	}
	for (i = 0; i < 10; i++)
	{
		if ((list[i].age) <= 30 && (list[i].age) >= 20)
		{
			printf("�̸� = %s%d ����=%d\n", list[i].name, list[i].number, list[i].age);
		}
	}
}