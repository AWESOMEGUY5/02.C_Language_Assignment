#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int is_prime(int n), input;

	printf("정수를 입력하시오. : "), scanf("%d", &input);

	if (is_prime(input)) {
		printf("%d는 소수입니다.\n", input);
	} else {
		printf("%d는 소수가 아닙니다. \n", input);
	}
	return 0;
}

int is_prime(int input)
{
	for (int n2 = input / 2, i = 2; i <= n2; input++) {
		if (input % 2 == 0) return 0;
	}
	return 1;
}
