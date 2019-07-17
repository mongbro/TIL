#include<stdio.h>
#include<math.h>

int find_pow(int a[10][3], int n);
int find_root(int a[10][3], int n);

int main() {
	int arr[10][3], n, find;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = pow(i + 1, j+1);		//10x3 배열에 원소값 채우기
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d  ", arr[i][j]);			//일단 한번 찍고 시작하자
		}
		printf("\n");
	}

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);							//찾고싶은 제곱근의 제곱수

	find = find_pow(arr, n);					//제곱값이 누구의 3제곱인지 찾는다

	if (find == 1)
		printf("%d의 세제곱근은 %d", n, find);
	else
		printf("그런거 없다.");
}

int find_pow(int a[10][3], int n){
	int find;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			if (n == a[i][j])					//j = 구하고 싶은 수의 세제곱
				return find = i + 1;			//i = 구하고 싶은 수
			else
				return 0;
		}
	}
}