#include<stdio.h>
#include<string.h>
int main() {
	char filename[100];		//������ �̸�
	char s[100];						//���� �̸��� ���� ����
	
	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image");		//�����̸��� "image"��� ���ڿ��� �ִ´�.
		sprintf_s(s, sizeof(s), "%d", i);		//���ڿ� s�� i�� �ش��ϴ� ���ڸ� �ִ´�.(2�ڸ� �̻��̵Ǿ '10'���� ġ�� �ʰ� '1', '0'���� �Ѵ�.)
		strcat_s(filename, sizeof(filename), s);		//"image" + "����" = filename("image����")
		strcat_s(filename, sizeof(filename), ".jpg");		//"image����" + ".jpg" = filename("image����.jpg")
		printf("%s\n", filename);
	}
}