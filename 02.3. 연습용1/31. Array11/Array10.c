#define SIZE 7
#include <stdio.h>
#include <math.h>

void square_array(int *array1, int size);
void print_array(const int *array1, int size);

int main(void)
{
	int array1[SIZE] = { 1,2,3,4,5,6,7 };
	print_array(array1, SIZE);
	square_array(array1, SIZE);
	print_array(array1, SIZE);
}

void square_array(int *array1, int size)
{
	for (int i = 0; i < size; i++) {
		*(array1 + i) = pow(*(array1 + i), 2);
	}
}

void print_array(const int *array1, int size)
{
	for (int i = 0; i < size; i++)
		printf("%3d ", *(array1 + i));
	printf("\n");
}