#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void)
{
	int a[ROWS][COLS] = {
		{87, 98, 80, 76, 3},
		{99, 89, 90, 90, 0},
		{65, 68, 50, 49, 0}
	};
/*
	srand(time(NULL));
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS - 1; j++) {
			a[i][4] = 0;
			a[i][j] = 1 + rand() % 100;
		}
	}
*/
	for (int i = 0; i < ROWS; i++) {
		double final_score = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1
			- a[i][4];
		printf("학생 #%d의 최종성적 : %g\n", i + 1, final_score);
	}
	return 0;
}
