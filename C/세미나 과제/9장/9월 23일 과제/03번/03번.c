#include<stdio.h>
#include"mong.h"

int main() {
	int pw, result;

	while (1) {
		if (count < 3) {
			printf("��й�ȣ : ");
			scanf("%d", &pw);
			result = check(pw);
			if (result == 0) 
				printf("����\n");
			else{
				printf("����\n");
				break;
			}
		}
		else {
			printf("�α��� �õ�Ƚ�� �ʰ�");
			break;
		}
	}
}