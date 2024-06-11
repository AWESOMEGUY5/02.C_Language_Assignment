#define SIZE 5

#include <stdio.h>

int main(void)
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];

	for (int i = 0; i < SIZE; i++) {
		b[i] = a[i];
		printf("%d ", *(a + i));
	} printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(b + i));
	}
}