#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int input, n1, n2, n3, i1, i2, i3, s, b, count = 0;
	srand((unsigned)time(NULL));

	while (1) {
		s = 0, b = 0;
		printf("�Է� : ");
		scanf("%d", &input);

		i1 = input / 100;
		i2 = input % 100 / 10;
		i3 = input % 10;
		if ((i1 == i2) || (i1 == i3) || (i2 == i3)) {
			printf("���� �ٸ� ���ڸ� �Է��Ͻÿ�.\n");
			continue;
		}

		while (1) {
			n1 = rand() % 10;
			n2 = rand() % 10;
			n3 = rand() % 10;
			if ((n1 != n2) && (n1 != n3) && (n2 != n3))
				break;
		}

		if (i1 == n1)
			s++;
		if (i2 == n2)
			s++;
		if (i3 == n3)
			s++;
		if (i1 == n2 || i1 == n3)
			b++;
		if (i2 == n1 || i2 == n3)
			b++;
		if (i3 == n1 || i3 == n2)
			b++;
		printf("input -> %d%d%d   number -> %d%d%d\n", i1, i2, i3, n1, n2, n3);
		printf("%d��Ʈ����ũ %d��", s, b);

		count++;
		printf("\n");
		if (count >= 10) {
			printf("��� �Ϸ��� �ƹ� ��ư�̳� �����ÿ�.");
			_getch();
			count = 0;
			system("cls");
		}
	}
}