#include<stdio.h>

int main() {
	int i = 1, sum = 0;
	
	while (1) {
		sum += i;

		if (sum >= 10000)
			break;

		i++;
	}
	sum -= i;
	i--;
	printf("1부터 %d까지의 합이 %d입니다.", i, sum);
}