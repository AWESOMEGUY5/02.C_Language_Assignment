#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));

	const int max = 45;
	for (int i = 1; i <= 5; i++) {
		printf("%d ", (rand() + 1) % max);
	}
	return 0;
}