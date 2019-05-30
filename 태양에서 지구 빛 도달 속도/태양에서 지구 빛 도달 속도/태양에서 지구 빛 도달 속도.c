#include<stdio.h>
int main()
{
	double LS = 300000, D = 149600000, s;										//LS = 빛의 속도, D = 태양과 지구의 거리, s = 태양에서 지구로 빛이 도달하는데 걸리는 속도(초)
	int m;
	printf("빛의 속도는 %lfkm/s\n", LS);
	printf("태양과 지구와의 거리 %lfkm\n", D);
	s = D / LS;
	m = s / 60;
	s = s - m * 60;
	printf("도달 시간은 %d분 %lf초 입니다.", m, s);
	return 0;
}