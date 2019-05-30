#include<stdio.h>
int main() 
{
	int cm, ft;
	double in;
	printf("키를 입력하시오(cm) : ");
	scanf_s("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%dcm는 %d피트 %lf인치 입니다.", cm, ft, in);
	return 0;
}