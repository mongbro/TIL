#include<stdio.h>
#include<conio.h>
#include"mong.h"

int main() {
	int a, b, result;
	double result2;
	char op;
	while (1) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d%c%d", &a, &op, &b);
	
		switch (op) {
		case '+':
			countadd++;
			result = add(a, b);
			printf("���� ������ �� %d�� ����Ǿ����ϴ�.\n", countadd);
			printf("���� ��� : %d\n", result);
			break;
		case '-':
			countdiff++;
			result = diff(a, b);
			printf("���� ������ �� %d�� ����Ǿ����ϴ�.\n", countdiff);
			printf("���� ��� : %d\n", result);
			break;
		case '*':
			countmul++;
			result = mul(a, b);
			printf("���� ������ �� %d�� ����Ǿ����ϴ�.\n", countmul);
			printf("���� ��� : %d\n", result);
			break;
		case '/':
			countdiv++;
			result2 = div(a, b);
			printf("������ ������ �� %d�� ����Ǿ����ϴ�.\n", countdiv);
			printf("���� ��� : %lf\n", result2);
			break;
		}
	}
}