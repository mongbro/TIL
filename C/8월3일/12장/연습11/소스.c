#include<stdio.h>
#include<string.h>
int main() {
	char str[] = "I am a hero!!";
	char search[] = "hero";
	int loc;
	char* p;

	p = strstr(str, search);		//strstrŽ����� �ƹ��͵� ������ NULL���� p�� ����ȴ�.
	loc = (int)(p - str + 1);
	if (p != NULL)
		printf("%s�� %d��°�� �ֽ��ϴ�.\n", search, loc);
	else
		printf("%s�� �����ϴ�.\n", search);
	return 0;
}