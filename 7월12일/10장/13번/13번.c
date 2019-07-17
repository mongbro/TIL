#include<stdio.h>
#define SIZE 32

int main() {
	int bin[SIZE], n, count = 0;
	printf("입력 : ");
	scanf_s("%d", &n);
	printf("%d => ", n);
	for (int i = 0; i < 32 && n>0; i++) {
		bin[i] = n % 2;			//0 % 2 == 0 이고 1 % 0 == 1 이다.
		n /= 2;
		count++;				//n을 2로 몇번 나눠야하는지 세는 변수
	}
	for (int i = count - 1; i >= 0; i--) {		//배열은 0부터 시작하므로 count에서 1을 빼주고 시작한다.
		printf("%d", bin[i]);
	}
	return 0;
}