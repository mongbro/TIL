#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int min_value(int n, int m);		//�ּҰ� ���ϴ� �Լ�
int max_value(int n, int m);		//�ִ밪 ���ϴ� �Լ�

int main(){
	int arr[10], max, min;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();			//�迭���ҵ��� ������ ����
	}
	min = arr[0], max = arr[0];		//�ִ�, �ּҰ��� �ʱ⿡�� 0��° �迭�� ����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++){
			min = min_value(min, arr[j]);
			max = max_value(max, arr[j]);
		}
	}
	printf("�ִ밪 : %d\n�ּҰ� : %d", max, min);
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