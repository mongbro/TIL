#include<stdio.h>

int main() {
	int binary[32], n, count = 0;	//count는 n을 2로 나눈 횟수, 2진수의 자리수를 의미한다.
	printf("입력 : ");
	scanf_s("%d", &n);
	printf("%d -> ", n);
	for (int i = 0; i < 32 && n > 0; i++) {
		binary[i] = n % 2;		//배열에는 각 자리수의 2진수의 수, 즉 2로 나눈 나머지 0 또는 1이 들어간다.
		n /= 2;		
		count++;
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	return 0;
}