#include<stdio.h>

int f_find(int a[], int n);		//�ش� ��ǰ�� ��� �ִ��� ã�� �Լ�

int main() {
	int pro[10], n;
	for (int i = 0; i < 10; i++) {
		pro[i] = (i + 2) / 2;			//��ǰ ��ȣ 1~10�� �տ��� 2���� ���� 1, 2, 3, 4, 5�� �����Ѵ�.
	}
	printf("��ǰ ��ȣ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.", n, f_find(pro, n));
}

int f_find(int a[], int n) {
	for (int i = 0; i < 10; i++) {
		if (n == i+1)
			return a[i];
	}
}