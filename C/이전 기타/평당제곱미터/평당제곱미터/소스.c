#include<stdio.h>
#define x 3.3058
int main()
{
	double PY, M2;
	
	printf("���� �Է��Ͻÿ� : ");
	scanf("%lf", &PY);

	M2 = PY * x;

	printf("%lf ���� %lf�������� �Դϴ�.", PY, M2);
	return 0;
}