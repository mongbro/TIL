#include<stdio.h>
#include<string.h>

typedef struct call {
	char name[20];
	char phone[20];
	char tell[20];
}CALL;

int main(){
	CALL a[3];
	char name[20];
	for (int i = 0; i < 3; i++) {
		printf("�̸� : ");
		scanf("%s", a[i].name);
		printf("�� : ");
		scanf("%s", a[i].phone);
		printf("�� : ");
		scanf("%s", a[i].tell);
	}
	printf("�˻��� �̸� : ");
	scanf("%s", name);
	for (int i = 0; i < 3; i++) {
		if (strcmp(name, a[i].name) == 0)
			printf("�� : %s\n�� : %s", a[i].phone, a[i].tell);
	}
}