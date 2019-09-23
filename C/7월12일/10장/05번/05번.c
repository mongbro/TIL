#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int count_num(int a[], int size);		//0~9������ ������ ���ο� �迭�� �߰��ϴ� �Լ�
void array(int a[], int size);			//��ü �迭 ������ ���ϱ� (100��)
int max_value(int a[],int size);		//�󵵼� ���� �ε��� ���ϴ� �Լ�

int main() {
	int arr[SIZE];
	array(arr, SIZE);
	printf("���� ���� ���� �� : %d", count_num(arr, SIZE));
	return 0;
}

void array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 10;					//���� �迭(100��)�� 0���� 9������ ������ ����
	}
}

int count_num(int a[], int size) {
	int arr[10] = { 0 };					//0���� 9������ ������ ������ ���ο� �迭
	for (int i = 0; i < size; i++) {		
		for (int j = 0; j < 10; j++) {
			if (a[i] == j)
				arr[j]++;					//���� �迭�� ���Ұ� 0���� 9������ n�϶� �� �迭[n]�� ���� +1 
		}
	}
	return max_value(arr, 10);
}

int max_value(int a[], int size) {
	int max = a[0], max_num;				//max = ���� ū ���� ����, max_num = ���Ұ� ���� ū �� �迭 n
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			max_num = i;
		}
	}
	return max_num;
}