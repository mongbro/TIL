#include<stdio.h>

void get_int(int* px, int* py);

int main() {
	int x, y;

	printf("2���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	get_int(&x, &y);												// �������� ������ ���;� �� �ڸ��ϱ� �������� ���� ��� �� �������� �ּҸ� �������ش�.

	return 0;
}

void get_int(int* px, int* py) {
	int sum = *px + *py;

	printf("������ ���� %d", sum);
}


////////////////////////////////***   ���� ��~�� �ٸ� ���***////////////////////////////////

/*
#include<stdio.h>

void get_int(int* px, int* py);

int main() {
	int x, y;
	int* px = &x, * py = &y;									//  �������� ������ ���� �������ְ�

	printf("2���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	get_int(px, py);												//�������� ������ �� �ڸ��� �������� �״�� ���൵ ok

	return 0;
}

void get_int(int* px, int* py) {
	int sum = *px + *py;

	printf("������ ���� %d", sum);
}
*/