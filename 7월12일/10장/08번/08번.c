#include<stdio.h>
#include<math.h>
#define SIZE 10
double avg(double a[], int n);				//평균 구하는 함수
double dif(double a[], double r, int n);	//표준편차 구하는 함수

int main() {
	double arr[SIZE], avge, diff;
	for (int i = 0; i < SIZE; i++) {
		printf("자료를 입력하시오 : ");
		scanf_s("%lf", &arr[i]);
	}

	avge = avg(arr, SIZE);
	diff = dif(arr, avge, SIZE);

	printf("평균 : %lf\n표준편차 : %lf", avge, diff);
	return 0;
}

double avg(double a[], int n) {
	double sum = 0;
	for (int i = 0; i < SIZE; i++) {			//평균 구하는 함수
		sum += a[i];
	}
	return sum / SIZE;
}

double dif(double a[], double r, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(a[i] - r, 2);				//분산 구하는 함수
	}
	return sqrt(sum / n);						//분산의 제곱근 반환
}