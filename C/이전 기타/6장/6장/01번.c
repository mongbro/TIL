#include<stdio.h>
int main()
{
	char c;

	printf("���ڸ� �Է��Ͻÿ� : ");
	c = getchar();

	switch (c) 
	{
	case 'a': case 'i': case 'u': case 'e': case 'o': case 'A': case 'I': case 'U': case 'E': case 'O':
		printf("�����Դϴ�.");
		break;
	default :
		if (c < 65 || c > 90 && c < 97 || c > 122)
			printf("���ڰ� �ƴմϴ�.");
		else
			printf("�����Դϴ�.");
	}

	return 0;

}