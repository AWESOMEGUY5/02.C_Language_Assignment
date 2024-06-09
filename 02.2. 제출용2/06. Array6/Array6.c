#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5

int main(void)
{
	int array[ROWS][COLS];				// 2차원 배열 생성	
	srand((unsigned)time(NULL));		// 난수 생성기 초기화
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			array[i][j] = (rand() + 1) % 100;
			printf("%2d ", array[i][j]);
		}
		printf("\n");
	}
}