#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int is_prime(int x)
{
	int i, n2;
	if (x < 2)
		return 0;

	for (n2 = x / 2, i = 2; i <= n2; i++)
		if (x % i ==0)
			return 0;

	return 1;
}

int main(void)
{
	int n;

	printf("정수를 입력하십시오. : "), scanf("%d", &n);

	if (is_prime(n)) {
		printf("%d는 소수입니다. \n", n);
	} else {
		printf("%d은 소수가 아닙니다. \n", n);
	}
}