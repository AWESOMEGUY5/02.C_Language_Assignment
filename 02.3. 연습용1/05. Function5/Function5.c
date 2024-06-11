#include <stdio.h>

unsigned is_prime(unsigned n);

int main(void)
{
	unsigned n;

	printf("정수를 입력하시오. : "), scanf_s("%u", &n);
	
	if (is_prime(n)) {
		printf("%u는 소수입니다. \n", n);
	} else {
		printf("%u는 소수가 아닙니다. \n", n);
	}
	return 0;
}

unsigned is_prime(unsigned n)
{
	int i, n2;

	if (n < 2) return 0;
	for (n2 = n / 2, i = 2; i <= n2; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
