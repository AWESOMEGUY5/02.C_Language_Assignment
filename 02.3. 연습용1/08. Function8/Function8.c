#include <stdio.h>

int main(void)
{
	int is_prime(int n);

	unsigned n;
	printf("정수를 입력하시오. : "), scanf_s("%u", &n);

	if (is_prime(n))
		printf("%d은 소수입니다. \n", n);
	else
		printf("%d은 소수가 아닙니다. \n", n);

	return 0;
}

int is_prime(unsigned n)
{
	if (n < 2) return 0;

	for (int i =2, n2 = n / 2; i < n2; i++) {
		if (n % i == 0) return 0;
		else return 1;
	}
}