#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

typedef struct student
{
	char name[SIZE];
	int Mat;
	int Kor;
	int Eng;
	double avg;
}S;

void menu();
void add(FILE* fp);
void print(S data);
void print_all(FILE* fp);
void search(FILE* fp);
S get_record();

int main()
{
	FILE* fp;
	int select;
	if ((fp = fopen("student.dat", "a+")) == NULL)
	{
		fprintf(stderr, "�Է������� ������ �� �� �����ϴ�.");
		exit(1);
	}

	while (1)
	{
		menu();
		printf("��ȣ�� �Է��Ͻÿ�:");
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			add(fp);
			break;
		case 2:
			print_all(fp);
			break;
		case 3:
			search(fp);
			break;
		case 4:
			return 0;
		}
	}

	fclose(fp);
	return 0;
}

void menu()
{
	printf("==============\n");
	printf("1.�߰�\n");
	printf("2.���\n");
	printf("3.�˻�\n");
	printf("4.����\n");
	printf("==============\n");
}



void add(FILE* fp)
{
	S data;
	data = get_record();
	fseek(fp, 0, SEEK_END);
	fwrite(&data, sizeof(data), 1, fp);
}

void print(S data)
{
	printf("�̸�: %s\n", data.name);
	printf("����: %d\n", data.Eng);
	printf("����: %d\n", data.Kor);
	printf("����: %d\n", data.Mat);
	printf("���: %lf\n", data.avg);
}

S get_record()
{
	S data;
	getchar();
	printf("�̸� :");
	gets_s(data.name, SIZE);
	printf("���� :");
	scanf_s("%d", &data.Mat);
	printf("���� :");
	scanf_s("%d", &data.Eng);
	printf("���� :");
	scanf_s("%d", &data.Kor);
	data.avg = ((double)data.Eng + (double)data.Mat + (double)data.Kor) / 3.0;
	return data;
}

void search(FILE* fp)
{
	char name[SIZE];
	S data;

	fseek(fp, 0, SEEK_SET);
	getchar();
	printf("Ž���Ϸ��� ����� �̸�:");
	gets_s(name, SIZE);
	while (!feof(fp))
	{
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0)
		{
			print(data);
			break;
		}
	}
}

void print_all(FILE* fp)
{
	S data;
	fseek(fp, 0, SEEK_SET);
	while(1)
	{
		fread(&data, sizeof(data), 1, fp); 
		{
			if (feof(fp))
				break;
			print(data);
		}
	}
}