#include<stdio.h>
#include<string.h>

struct book {
	char name[20];
	char tel[15];
	char pho[15];
};

int main() {
	struct book b[3];
	char name[20];

	for (int i = 0; i < 3; i++) {
		printf("�̸��� �Է��Ͻÿ� : ");
		gets_s(b[i].name, sizeof(b[i].name));
		printf("����ȭ��ȣ�� �Է��Ͻÿ� : ");
		gets_s(b[i].tel, sizeof(b[i].tel));
		printf("�޴�����ȣ�� �Է��Ͻÿ� : ");
		gets_s(b[i].pho, sizeof(b[i].pho));
		printf("\n");
	}

	printf("�˻��� �̸��� �Է��Ͻÿ� : ");
	gets_s(name, sizeof(name));
	for (int i = 0; i < 3; i++) {
		if (strcmp(name, b[i].name) == 0) {
			printf("����ȭ��ȣ : %s\n", b[i].tel);
			printf("�޴�����ȣ : %s\n", b[i].pho);
		}
	}
	return 0;
}