#include<stdio.h>
#include<math.h>

int find_pow(int a[10][3], int n);
int find_root(int a[10][3], int n);

int main() {
	int arr[10][3], n, find;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = pow(i + 1, j+1);		//10x3 �迭�� ���Ұ� ä���
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d  ", arr[i][j]);			//�ϴ� �ѹ� ��� ��������
		}
		printf("\n");
	}

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);							//ã����� �������� ������

	find = find_pow(arr, n);					//�������� ������ 3�������� ã�´�

	if (find == 1)
		printf("%d�� ���������� %d", n, find);
	else
		printf("�׷��� ����.");
}

int find_pow(int a[10][3], int n){
	int find;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			if (n == a[i][j])					//j = ���ϰ� ���� ���� ������
				return find = i + 1;			//i = ���ϰ� ���� ��
			else
				return 0;
		}
	}
}