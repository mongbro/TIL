#include<stdio.h>
#include<string.h>
int main() {
	char str[] = "language";
	char* p;
	int loc;

	p = strchr(str, 'g');		//strchrŽ����� �ƹ��͵� ������ NULL���� p�� ����ȴ�.
	loc = (p - str + 1);		//str�� �迭�� ù��° �ּҸ� �������� p�� ã�� ������ �ּҸ� �����´�
								//4 - 1 = 3 �̵Ǵϱ� 4��°�� �ִٰ� �ϰ������ " n - m + 1 " �� ����Ѵ�

	if (p != NULL) {			
		printf("ù��° %c�� %d���� �߰ߵ�\n", 'g', loc);
	}
	else
		printf("%c�� ���ߵ��� �ʾ���\n", 'g');
	return 0;
}