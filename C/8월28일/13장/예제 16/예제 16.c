#include<stdio.h>

///////////////////////////////////////*****************		여기부터 다시하기!!  도전문제 마지막거		*****************//////////////////////////////////////////

typedef struct id {
	char c[10];
	int num;
}ID;

typedef struct pw {
	char c[10];
	int num;
	char sc[10];
}PW;

typedef struct log {
	ID user_id;
	PW user_pw;
}LOG;

int log_in(ID user_id, PW user_pw);

int main() {
	ID user_id[5] = {
		{"whd", 4607},
	{"han", 1887},
	{"kj", 5098}
	};
	PW user_pw[5] = {
		{"whd", 4607, "*"},
	{"whd", 5098},
	{"rlawhddms", 4607, "*"}
	};
	LOG user = {
		
	}
}

int log_in(ID user_id, PW user_pw) {

}