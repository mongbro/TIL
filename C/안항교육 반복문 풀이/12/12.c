#include<stdio.h>

int main() {
	int f1 = 0, f2 = 1, f3, input;
	printf("���° �ױ��� ���ұ�� >> ");
	scanf("%d", &input);

	printf("%d ", f1);

	for (int i = 1; i <= input; i++) {
		f3 = f2 + f1;
		printf("%d ", f2);
		f1 = f2;
		f2 = f3;
	}
}