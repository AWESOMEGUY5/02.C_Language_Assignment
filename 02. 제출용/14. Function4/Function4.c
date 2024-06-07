#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


unsigned int factorial(unsigned int number)
{
	unsigned int factorial_result = 1;
	for (char i = 1; i <= number; i++) {
		factorial_result = factorial_result * i;
	}
	return factorial_result;
}

int combination(unsigned n, unsigned r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(void)
{
	unsigned int x, y;
	printf("조합 계산기 \n두 수를 입력하시오. :"), scanf("%u %u", &x, &y);

	printf("C(%u %u) = %u", x, y, combination(x, y));
}