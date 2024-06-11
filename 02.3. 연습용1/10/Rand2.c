// 로또 번호 v2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		
		printf("%d ", 1 + rand() % 45);
	}
	return 0;
}