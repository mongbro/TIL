#include<stdio.h>

enum days{SUN, MON, TUE, WED, THU, FRI, SAT};		//SUN = 0, MON = 1, TUE = 2 ... SAT = 6

char* days_name[] = 
{ "sunday", "monday", "tuesday", "wednesday", 
"thursday", "friday", "saturday" };

int main() {
	enum days d;		//변수명 : d

	d = WED;				//d = WED = 3

	printf("%d번째 요일은 %s입니다.\n", d, days_name[d]);
	//          3번째 요일은 wednesday입니다.           //

	return 0;
}