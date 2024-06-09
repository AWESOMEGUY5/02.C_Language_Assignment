#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 6; i++) {
		printf("%u ", rand());
	}
	printf("\n");
	return 0;
}