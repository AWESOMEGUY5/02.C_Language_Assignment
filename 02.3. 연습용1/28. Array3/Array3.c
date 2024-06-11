#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5

#include <stdio.h>

int main(void)
{
	int score[SIZE] = { 31,63,40,87,14 };

	for (int i = 0; i < SIZE; i++) {
		printf("score[%d] = %d\n", i, score[i]);
	}
	return 0;
}
