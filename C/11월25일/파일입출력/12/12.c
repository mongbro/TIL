#include<stdio.h>
#include<string.h>

typedef struct member {
	char name[20];	//�̸�
	int age;		//����
	char id[15];	//���̵�
	char pw[20];	//��й�ȣ
	int s[10][10];	//�����¼�
}MEMBER;

int main() {
	MEMBER mem[10] = { 0 }, list;
	FILE* fp;

	strcpy(mem[0].name, "aaa");
	mem[0].age = 12345;
	strcpy(mem[0].id, "bbb");
	strcpy(mem[0].pw, "ccc");

	fp = fopen("test.dat", "ab");

	fwrite(&mem[0], sizeof(MEMBER), 1, fp);

	fclose(fp);
	fopen("test.dat", "rb");
	fread(&list, sizeof(MEMBER), 1, fp);
	printf("%s %d %s %s", list.name, list.age, list.id, list.pw);
	fclose(fp);
}