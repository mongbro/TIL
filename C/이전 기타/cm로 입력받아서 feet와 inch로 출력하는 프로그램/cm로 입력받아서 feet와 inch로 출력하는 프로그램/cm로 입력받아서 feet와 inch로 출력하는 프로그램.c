/*cm�� �Է¹޾Ƽ� feet�� inch�� ����ϴ� ���α׷�*/
#include<stdio.h>
void main()
{
	double in;
	int cm, ft;
	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%dcm�� %d��Ʈ %lf��ġ �Դϴ�.", cm, ft, in);
	return 0;
}