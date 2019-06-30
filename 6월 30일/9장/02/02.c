#include<stdio.h>
#include<stdlib.h>
#define USER_ID 1234				//유저의 아이디는 고정되어있으므로 기호상수처리
#define USER_PW 748578				//유저의 비밀번호도 고정되어있으므로 기호상수처리

int check();						//입력한 ID와 PW가 유저의 것과 같은지 확인하는 함수
void bank();						//입금 또는 출금을 선택하는 함수
void deposit();						//입금을 실행하는 함수
void withdraw();					//출금을 실행하는 함수

int account_1234 = 100000, try = 0, id, pw, money;		//account_1234는 유저 1234의 통장 잔액, try는 로그인 시도횟수, money는 입/출금 액수이다.

int main()
{
	int result;
	while (1)
	{
		printf("ID : ________\b\b\b\b\b\b\b\b");										//" \b " 는 커서는 1칸씩 뒤로 옮기는 명령어
		scanf_s("%d", &id);
		printf("PW : ____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");	//즉 입력시 맨 왼쪽 _부터 사라지면서 그 자리에 숫자가 들어간다.
		scanf_s("%d", &pw);
		result = check();
		if (result == 1)
		{
			printf("로그인 성공\n");
			bank();							//로그인에 성공시에만 bank함수로 연결한다.
			break;
		}
		if (result == 2)
		{
			printf("로그인에 실패했습니다. 다시 시도해주세요.\n");
			printf("시도횟수 : %d\n", try);					//try의 횟수가 일정이상 넘어가면 계정을 잠군다.
		}
		if (result == 3)
		{
			printf("5회 연속으로 로그인에 실패하였습니다. 공인인증서를 지참하고 해당 은행으로 방문해주시기 바랍니다.");			//공인인증서와 액티브X를 만든 새끼는 화장실 갈때마다 인증서검사를 하고 시간초과되서 처음부터 다시 시도해야된다.
			break;
		}
	}
	return 0;
}

int check()
{
	if (try == 5)					//로그인 시도 횟수가 5회가 넘어가면 3을 반환한다.
		return 3;
	if (USER_ID == id && USER_PW == pw)
		return 1;
	else
		try++;
		return 2;
}
void bank()
{
	char choice;
	printf("%d님의 통장 잔액은 %d원 입니다.\n", id, account_1234);
	while (1)
	{
		int n = 0;						//요건 장난
		while (1)
		{
			printf("입/출금을 선택하시오(입금 : D,  출금 : W,  나가기 : Q) : ");
			scanf_s("\n%c", &choice, 1);										//앞에 \n을 안붙이면  엔터를 입력값으로 받아버린다.
			n++;
			if (choice == 'D' || choice == 'd' || choice == 'W' || choice == 'w' || choice == 'Q' || choice == 'q')
				break;
			if (n >= 10)
			{
				printf("적당히 하세요. 빡대가리세요? D 또는 W를 누르라고\n");
				if (n >= 20)
					printf("개새끼야\n");
			}
			printf("잘못된 입력입니다. 다시 입력해주세요.\n");
		}
		if (choice == 'q' || choice == 'Q')
			break;

		switch (choice)
		{
		case 'd':
		case 'D':
			deposit();
			break;
		case 'w':
		case 'W':
			withdraw();
			break;
		}
	}
}
void deposit()
{

	printf("얼마를 입금하시겠습니까?");
	scanf_s("%d", &money);
	account_1234 += money;								//account에 입금액을 합한다.
	printf("%d님의 통장 잔액은 %d원 입니다.\n", id, account_1234);
}
void withdraw()
{
	while (1)
	{
		printf("얼마를 출금하시겠습니까?");
		scanf_s("%d", &money);
		if (money > account_1234)
			printf("잔액보다 많은 금액은 출금할 수 없습니다.\n");
		else
		{
			account_1234 -= money;					//account에 입금액을 뺀다.
			printf("%d님의 통장 잔액은 %d입니다.\n", id, account_1234);
			break;
		}
	}
}