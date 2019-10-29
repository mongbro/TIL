#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[100], b[10] = { 0 }, max = b[0], c;
	for (int i = 0; i < 100; i++) {
		a[i] = rand() % 10;
		for (int j = 0; j < 10; j++) {
			if (a[i] == j)
				b[j]++;
		}
	}
	for (int i = 0; i < 10; i ++) {
		printf("%2d   ", i);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%2d   ", b[i]);
		if (max < b[i]) {
			max = b[i];
			c = i;
		}
	}

	printf("\n가장 많이 나온 수 : %d\n횟수 : %d", c, max);
}