#include <stdio.h>

int main(void)
{
	int score[5], sum = 0;
	score[0] = 80;
	score[1] = 30;
	score[2] = 50;
	score[3] = 70;
	score[4] = 100;

	for (int i = 0; i <= 4; i++) {
		printf("score[%d] = %d\n", i, score[i]);
	}
	for (int i = 0; i <= 4; i++) {
		sum += score[i];
	}
	int average = sum / 4;
	printf("ЦђБе : %d", average);
}