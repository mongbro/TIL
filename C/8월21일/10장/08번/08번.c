#include<stdio.h>
#include<math.h>

int main() {
	double arr[10];
	double avg, dev, var;
	double sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("�Է�%d : ", i + 1);
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	
	avg = sum / 10;
	sum = 0;
	
	for (int i = 0; i < 10; i++) {
		sum += pow((arr[i] - avg), 2);
	}

	var = sum / 10;
	dev = sqrt(var);

	printf("��հ��� %lf\nǥ���������� %lf", avg, dev);
}