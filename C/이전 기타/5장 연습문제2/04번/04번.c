#include<stdio.h>
int main() 
{
	int cm, ft;
	double in;
	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf_s("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%dcm�� %d��Ʈ %lf��ġ �Դϴ�.", cm, ft, in);
	return 0;
}