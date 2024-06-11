#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int combination(unsigned x, unsigned y);
unsigned int factorial(unsigned x);

int main(void)
{
	unsigned x = 0, y = 0;
	printf("정수를 입력하시오. : "), scanf("%u %u", &x, &y);
	printf("C(%u %u) = %u", x, y, combination(x, y));
}

unsigned int combination(unsigned n, unsigned r)
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}

unsigned int factorial(unsigned x)
{
	unsigned int result = 1;
	for (unsigned i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}