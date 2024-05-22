#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int input()
{
	int n;
	printf("정수를 입력하시오. : "), scanf("%d", &n);
	return n;
}
int factorial(int n)	//팩토리얼 계산
{
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}
int calculate(int n, int r) //조합 계산
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(void)
{
	int n = input();
	int r = input();
	printf("C(%d, %d) = %d\n", n, r, calculate(n, r));
}