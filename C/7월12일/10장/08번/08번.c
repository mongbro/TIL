#include<stdio.h>
#include<math.h>
#define SIZE 10
double avg(double a[], int n);				//��� ���ϴ� �Լ�
double dif(double a[], double r, int n);	//ǥ������ ���ϴ� �Լ�

int main() {
	double arr[SIZE], avge, diff;
	for (int i = 0; i < SIZE; i++) {
		printf("�ڷḦ �Է��Ͻÿ� : ");
		scanf_s("%lf", &arr[i]);
	}

	avge = avg(arr, SIZE);
	diff = dif(arr, avge, SIZE);

	printf("��� : %lf\nǥ������ : %lf", avge, diff);
	return 0;
}

double avg(double a[], int n) {
	double sum = 0;
	for (int i = 0; i < SIZE; i++) {			//��� ���ϴ� �Լ�
		sum += a[i];
	}
	return sum / SIZE;
}

double dif(double a[], double r, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(a[i] - r, 2);				//�л� ���ϴ� �Լ�
	}
	return sqrt(sum / n);						//�л��� ������ ��ȯ
}