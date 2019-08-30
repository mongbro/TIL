#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void print(char a[15][15]);	//15 * 15 �迭�� ����ϴ� �Լ�
void rand_number(char a[15][15], int b, int n, int m);	//8���� ������ ���� �Լ�
int check_num(char a[15][15], int b, int n, int m);	//�ߺ� �˻��ϴ� �Լ�
int over_line(char a[15][15], int b, int n, int m);	//�迭�� ������ ����� ��츦 �˻��ϴ� �Լ�
int endf(char [15][15], int b, int n, int m);	//��������

int main() {
	char arr[15][15], op;
	int rand_num=0, n, m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = '.';	//��µǴ� �迭�� ���� ��� '.'���� �Ѵ�.
		}
	}
	n = 7, m = 7;	//��¹迭�� ������
	arr[n][m] = '*';	//�������� *�� ����Ѵ�.
	print(arr);
	while (1) {
		while (1) {
			printf("�����Ͻðڽ��ϱ�?(Y or N) ");
			scanf_s("\n%c", &op, 1);
			if (op == 'Y' || op == 'y' || op == 'N' || op == 'n')
				break;
			printf("�Է��� Y �Ǵ� N\n");
		}
		if (op == 'N' || op == 'n')
			break;
		system("cls");
		srand((unsigned)time(NULL));
		rand_number(arr, rand_num, n, m);	//������ �̵������� ���Ѵ�.
		print(arr);
	}
}

void print(char a[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", a[i][j]);
		}
		printf("\n");
	}
}

void rand_number(char a[15][15], int b, int n, int m) {
	while (1) {
		b = rand() % 8;	//8���� ������ �ϳ�
		
		switch (b) {
		case 0:
			n -= 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 1:
			n -= 1, m += 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 2:
			m += 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 3:
			n += 1, m += 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 4:
			n += 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 5:
			n += 1, m -= 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 6:
			m -= 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		case 7:
			n -= 1, m -= 1;
			if (check_num(a, b, n, m) == 1) {	//�̵��� ���� �̹� ������ ������� �˻�
				if (over_line(a, b, n, m) == 1)	//�迭�� ������ ������� �˻�
					exit(1);
				break;
			}
			else
				continue;
		}
		if (endf(a, b, n, m) == 1)
			break;
	}
}

int check_num(char a[15][15], int b, int n, int m) {
	if (a[n][m] == '.') {
		a[n][m] = '*';
		return 1;
	}
	else {
		switch (b) {
		case 0:
			n += 1;
			break;
		case 1:
			n += 1, m -= 1;
			break;
		case 2:
			m -= 1;
			break;
		case 3:
			n -= 1, m -= 1;
			break;
		case 4:
			n -= 1;
			break;
		case 5:
			n -= 1, m += 1;
			break;
		case 6:
			m += 1;
			break;
		case 7:
			n += 1, m += 1;
			break;
		}
		return 0;
	}
}

int over_line(char a[15][15], int b, int n, int m) {
	if (n >= 15 || m >= 15 || n < 0 || m < 0) {
		rand_number(a, b, n, m);
		return 1;
	}
	else
		return 0;;
}

int endf(char a[15][15], int b, int n, int m) {
	if (check_num(a, b, n, m) == 1 || over_line(a, b, n, m) == 0)
		return 1;	//�������϶� 1�� ��ȯ�ϰ� �Լ� ����
	else
		return 0;	//�ƴҶ��� �ٽ� �ݺ�
}