/*nPr = n * (n-1) * (n-2) * ~ * (n-r-1) 이다*/
#include<stdio.h>
int main()
{
	int n, r, result = 1;
	printf("n의 값 : ");
	scanf_s("%d", &n);
	printf("r의 값 : ");
	scanf_s("%d", &r);

	for (int m=n; m >= (n - r - 1); m--)	//m을 쓴 이유는 조건문에 (n >= (n - r - 1)) 이라고 쓰면 양쪽이 둘다 1씩 작아져서 
	{										//무한반복이 되기 때문이다. 그래서 n과 초기 숫자가 같은 m으로 비교한다.
		result *= m;
	}
	printf("%d", result);
	return 0;
}