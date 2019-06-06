/*태양에서 지구로 빛이 도달하는 시간 구하기*/
#include<stdio.h>
void main()
{
	double LS = 300000, D = 149600000, time, s;
	int m;
	printf("빛의 속도는 %lfkm/s이고 태양과 지구의 거리는 %lfkm입니다.\n", LS, D);
	time = (D / LS) / 60;
	m = time;
	s = (time - m) * 60;
	printf("태양에서 지구로 빛이 도달하는데 걸리는 시간은 %d분 %.3lf초 입니다.", m, s);
	return 0;
}
