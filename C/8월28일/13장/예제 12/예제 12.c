#include<stdio.h>

enum days{SUN, MON, TUE, WED, THU, FRI, SAT};		//SUN = 0, MON = 1, TUE = 2 ... SAT = 6

char* days_name[] = 
{ "sunday", "monday", "tuesday", "wednesday", 
"thursday", "friday", "saturday" };

int main() {
	enum days d;		//������ : d

	d = WED;				//d = WED = 3

	printf("%d��° ������ %s�Դϴ�.\n", d, days_name[d]);
	//          3��° ������ wednesday�Դϴ�.           //

	return 0;
}