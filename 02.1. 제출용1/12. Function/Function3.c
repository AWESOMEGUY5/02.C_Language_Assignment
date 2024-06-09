#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

unsigned int factorial(unsigned int a)
{
	unsigned int factoral_result = 1;
	for (unsigned int i = 1; i <= a; i++) {
		factoral_result = factoral_result * i;
	}
	return factoral_result;
}

int main(void)
{
	unsigned int x, result;
	printf("알고 싶은 팩토리얼의 값은? : "), scanf("%u", &x);
	result = factorial(x);

	printf("%u!의 값은 %u입니다.", x, result);
}