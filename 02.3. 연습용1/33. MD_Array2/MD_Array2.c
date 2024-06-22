#include <stdio.h>

int main(void)
{
	int a[2][3] = { {1,2}, {3,4} };
	int b[2][3] = { 1,2, 3,4 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", b[i][j]);
		}
	}
}