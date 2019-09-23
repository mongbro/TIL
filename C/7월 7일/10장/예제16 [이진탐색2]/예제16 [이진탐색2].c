#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30
int check(int a[], int n);
void search(int a[], int n);
void rand_num(int list[], int n);
void check_repit(int list[], int n);
void sort(int list[], int n);

int main(){
	int list[SIZE] = { SIZE + 2 }, n;
	rand_num(list, SIZE);
	sort(list, SIZE);
	for (int i = 0; i < SIZE; i++){					//-------------------------------
		printf("list[%2d] = %2d\n", i, list[i]);	//���
	}												//-------------------------------

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	search(list, n);
}

void rand_num(int list[], int n){					//-------------------------------//���� ������ ������ ä���ִ´�.
	for (int i = 0; i < SIZE; i++) {
		int rand_num;
		srand((unsigned)time(NULL));
		rand_num = rand() % SIZE + 1;
		while (check(list, rand_num))
		{
			rand_num = rand() % SIZE + 1;
		}
		list[i] = rand_num;
	}
}
void check_repit(int list[], int n){				//-------------------------------//�ߺ��Ǵ� ���� ã�� �ٲٱ�
	int a;
	for (int i = 0; i < n; i++) {
		a = check(list, list[i]);
		if (a == 1)
			check_repit(list, SIZE);
	}
}													//-------------------------------

void sort(int list[], int n){						//-------------------------------
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			int tmp;
			if (list[i] > list[j]){
				tmp = list[i];
				list[i] = list[j];					//����
				list[j] = tmp;
			}
		}
	}												//-------------------------------
}

int check(int a[], int n){
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == n)
			return 1;
	}
	return 0;
}

void search(int a[], int n)
{
	int low, middle, high, try = 0;
	low = 0, high = SIZE;
	middle = (low + high) / 2;
	while (n == middle) {
		try++;
		if (n < middle) {
			high = middle;
		}
		if (n > middle) {
			low = middle;
		}
		middle = (low + high) / 2;
	}
	printf("�õ�Ƚ�� : %d\n\n\n", try);

}