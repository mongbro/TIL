#include<stdio.h>
int main()
{
	int n, r, i, result = 1;
	printf("n의값 : ");
	scanf_s("%d", &n);
	printf("r의값 : ");
	scanf_s("%d", &r);
	for (i = n; i >= n - r - 1; i--)			// *주의*  i를 n으로 대입해서 쓴 이유는 n에게 증감을 걸면 조건식결과도 바뀌기때문이다.
	{
		result *= i;
	}
	printf("순열의 값은 %d입니다.", result);
	return 0;
}