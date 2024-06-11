// 배열을 초기화하지 않았을 때
#define SIZE 5

#include <stdio.h>

int main(void)
{
	int score[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		printf("score[%d] = %d\n", i, *(score + i));
	}

	return 0;
}