#define SIZE 5

#include <stdio.h>

int main(void)
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i]) printf("[%d], a와 b는 서로 같습니다. \n", i);
		else printf("[%d], a와 b는 서로 다릅니다. \n", i);
	}
	return 0;
}