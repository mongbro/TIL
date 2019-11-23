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
		printf("이름 : ");
		scanf("%s", a[i].name);
		printf("폰 : ");
		scanf("%s", a[i].phone);
		printf("집 : ");
		scanf("%s", a[i].tell);
	}
	printf("검색할 이름 : ");
	scanf("%s", name);
	for (int i = 0; i < 3; i++) {
		if (strcmp(name, a[i].name) == 0)
			printf("폰 : %s\n집 : %s", a[i].phone, a[i].tell);
	}
}