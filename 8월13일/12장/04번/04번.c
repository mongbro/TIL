#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };				//�Է¹޴� ���ڿ�
	char alpha[100] = { 0 };			//���ĺ� �ϳ��ϳ�
	int count[100] = { 0 };			//��

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", str);
	
	alpha[0] = 'a';

	for (int i = 1; i<=25 ;i++) {
		alpha[i] = alpha[i - 1] + 1;			//alpha[0] = a, [1] = b, [3] = c ... [25] = z
	}
	
	for (int i = 0; str[i] != NULL; i++) {
		for (int j = 0; alpha[j] != NULL; j++) {
			if (str[i] == alpha[j])			//str�߿��� alpha�� ��ġ�� �ε����� ã�Ƽ�
				count[j]++;						//�ش� �ε����� �󵵼��� ����
		}
	}

	for (int i = 0; alpha[i] != NULL; i++) {
		printf("%c : %d\n", alpha[i], count[i]);
	}
}