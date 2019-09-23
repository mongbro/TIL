#include<stdio.h>

int f_find(int a[], int n);		//해당 상품이 어디에 있는지 찾는 함수

int main() {
	int pro[10], n;
	for (int i = 0; i < 10; i++) {
		pro[i] = (i + 2) / 2;			//상품 번호 1~10은 앞에서 2개씩 각각 1, 2, 3, 4, 5에 보관한다.
	}
	printf("상품 번호를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("상품 번호 %d의 위치는 %d입니다.", n, f_find(pro, n));
}

int f_find(int a[], int n) {
	for (int i = 0; i < 10; i++) {
		if (n == i+1)
			return a[i];
	}
}