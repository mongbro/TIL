#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PW 1234

int check();

int main() {
	while (1) {
		if (check() == 1) {
			printf("�α��� ����");
			break;
		}
	}
}

int check() {
	static int count = 0;
	int pw;
	if (count == 3) {
		printf("�α��� �õ�Ƚ�� �ʰ�\n");
		return 1;
	}
	printf("��й�ȣ : ");
	scanf("%d", &pw);

	if (pw == PW)
		return 1;
	else {
		count++;
		return 0;
	}
}