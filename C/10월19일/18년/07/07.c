#include<stdio.h>

int sum_func(int count);

int main(){
	int num;
	printf("�Է� : ");
	scanf("%d", &num);
	printf("1���� %d������ �� : %d", num, sum_func(num));

	return 0;
}

int sum_func(int count) {
	if (count > 1)
		return count + sum_func(count - 1);
	else
		return 1;
}