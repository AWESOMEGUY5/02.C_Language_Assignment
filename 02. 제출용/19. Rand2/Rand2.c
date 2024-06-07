#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	const int max = 45;

	for (int i = 0; i < 6; i++) {
		printf("%d ", 1 + rand() % max);
	}
	printf("\n");
	return 0;
}