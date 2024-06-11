#include <stdio.h>

int main(void)
{
	
	int score[] = { 1,2,3,4,5,6 };
	int size = sizeof score / sizeof score[0];

	for (int i = 0; i < size; i++) {
		printf("%d \n", score[i]);
	}
}