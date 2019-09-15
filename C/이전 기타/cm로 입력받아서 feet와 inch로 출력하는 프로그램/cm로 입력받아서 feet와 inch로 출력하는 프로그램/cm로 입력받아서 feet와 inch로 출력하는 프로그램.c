/*cm로 입력받아서 feet와 inch로 출력하는 프로그램*/
#include<stdio.h>
void main()
{
	double in;
	int cm, ft;
	printf("키를 입력하시오(cm) : ");
	scanf("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%dcm는 %d피트 %lf인치 입니다.", cm, ft, in);
	return 0;
}