#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ID 123
#define PW 987654321

int try_log(int id, int pw);

int main() {
	int id, pw, check;

	while (1) {
		printf("id : ");
		scanf("%d", &id);
		printf("pw :");
		scanf("%d", &pw);
		check = try_log(id, pw);

		if (check == 1) {
			printf("�α��� ����\n");
			return 0;
		} 
		else if (check == 2) {   
			printf("�α��� ����\n");
			continue;
		}
		else if (check == 0) {
			printf("�α����� 3ȸ �̻� �����߽��ϴ�.\n");
			return 0;
		}
	}
}

int try_log(int id, int pw) {
	static int count = 0;
	count++;
	if (id == ID) {
		if (pw == PW) 
			return 1;
	}
	if (count >= 3)
		return 0;
	return 2;
}