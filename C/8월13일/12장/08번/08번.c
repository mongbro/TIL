#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };
	char* token;
	char deli[10] = " .,\n";
	int count = 0;

	printf("���ڿ��� �Է��Ͻÿ� : ");
 	scanf("%[^\n]s", str);

	token = strtok(str, deli);

 	for (int i = 0; token!= NULL; i++) {				//*************for�� �߰����� str[i] != NULL �� �ƴ϶� token != NULL �� �����Ѵ�.*************//
		count++;
		token = strtok(NULL, deli);
	}

	printf("�ܾ��� ���� %d�Դϴ�.", count);
	return 0;
}