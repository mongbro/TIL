#include<stdio.h>

int sum_func(int count);

int main(){
	int num;
	printf("입력 : ");
	scanf("%d", &num);
	printf("1부터 %d까지의 합 : %d", num, sum_func(num));

	return 0;
}

int sum_func(int count) {
	if (count > 1)
		return count + sum_func(count - 1);
	else
		return 1;
}