#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void)
{
	int array[ROWS][COLS] = {
		{87,98,80,76,3},
		{99,89,90,90,0},
		{65,68,80,49,0}
	};
	for (int i = 0; i < ROWS; i++) {
		double final_score = array[i][0] * 0.3 + array[i][1] * 0.4 + array[i][2] * 0.2 + array[i][3] * 0.1 - array[i][4];
		printf("학생 #%d의 최종점수 : %3.2f\n", i + 1, final_score);
	}
	return 0;
}