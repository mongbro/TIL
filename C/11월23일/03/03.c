#include<stdio.h>

double get_avg(int list[], int n);

int main() {
	int list[3][3] = { 90,80,70,60,50,40,80,40,50 };
	for (int i = 0; i < 3; i++) {
		printf("%dÇàÀÇ Æò±Õ°ª : %05.2lf\n", i, get_avg(list+i, 3));
	}
}

double get_avg(int list[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += list[i];
	}
	return (double)sum / n;
}