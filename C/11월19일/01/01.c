#include<stdio.h>
#include<string.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main() {
	struct book b;
	b.id = 1;
	strcpy(b.title, "�ٶ��� �Բ� �������.");
	strcpy(b.author, "������ ��ÿ");
	printf("{ %d. %s %s }", b.id, b.title, b.author);

}