#include<stdio.h>
int main()
{
	int i;
	
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &i);

	for (int n = 1; n <= i; n++)			//i의 약수들만 뽑아서 출력
	{
		if (i%n == 0)
			printf("%d ", n);
	}
	return 0;
}