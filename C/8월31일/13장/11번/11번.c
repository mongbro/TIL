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
		printf("이름을 입력하시오 : ");
		gets_s(b[i].name, sizeof(b[i].name));
		printf("집전화번호를 입력하시오 : ");
		gets_s(b[i].tel, sizeof(b[i].tel));
		printf("휴대폰번호를 입력하시오 : ");
		gets_s(b[i].pho, sizeof(b[i].pho));
		printf("\n");
	}

	printf("검색할 이름을 입력하시오 : ");
	gets_s(name, sizeof(name));
	for (int i = 0; i < 3; i++) {
		if (strcmp(name, b[i].name) == 0) {
			printf("집전화번호 : %s\n", b[i].tel);
			printf("휴대폰번호 : %s\n", b[i].pho);
		}
	}
	return 0;
}