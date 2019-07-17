#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int min_value(int n, int m);		//최소값 구하는 함수
int max_value(int n, int m);		//최대값 구하는 함수

int main(){
	int arr[10], max, min;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();			//배열원소들은 난수로 지정
	}
	min = arr[0], max = arr[0];		//최대, 최소값은 초기에는 0번째 배열로 지정
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++){
			min = min_value(min, arr[j]);
			max = max_value(max, arr[j]);
		}
	}
	printf("최대값 : %d\n최소값 : %d", max, min);
}

int min_value(int n, int m){
	if (n < m)
		return n;
	else
		return m;
}

int max_value(int n, int m) {
	if (n > m)
		return n;
	else
  		return m;
}