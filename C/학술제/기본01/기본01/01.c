#include<stdio.h>
#include"charac4.h"
#include"damage.h"

int main() {
	int num;						//��Ƽ �ο�
	printf("��Ƽ�� �ο��� �����ϼ���(3 or 4) : ");
	scanf("%d", &num);

	if (num == 3) {
		initial_party();
	}
	else if (num == 4) {
		initial_party();
	}
}