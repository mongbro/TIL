#include<stdio.h>
#define PY_PER_M2 3.3058
int main()
{
	double PY, M2;
	printf("���� �Է��Ͻÿ� : ");
	scanf("%lf", &PY);

	M2 = PY * PY_PER_M2;

	printf("%lf���� %lf�������� �Դϴ�.", PY, M2);
	return 0;
}