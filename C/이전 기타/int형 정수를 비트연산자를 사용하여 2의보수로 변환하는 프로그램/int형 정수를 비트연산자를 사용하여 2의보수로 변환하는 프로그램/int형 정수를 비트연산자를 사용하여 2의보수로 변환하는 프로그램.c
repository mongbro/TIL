/*int�� ������ ��Ʈ�����ڸ� ����Ͽ� 2�Ǻ����� ��ȯ�ϴ� ���α׷�*/
#include<stdio.h>
void main()
{
	int x, C2;
	printf("�������Է��Ͻÿ�:");
	scanf("%d", &x);

	C2 = 1 + ~x;

	printf("2�� ���� : %d", C2);
	return 0;
}