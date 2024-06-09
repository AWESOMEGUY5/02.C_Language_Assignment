#include <stdio.h>

#define SIZE 7

void print_array(const int a[], int size);
void square_array(int a[], int size);

int main(void)
{	
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);

	return 0;
}

void print_array(const int a[], int size)
{
	for (int i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
}

void square_array(int a[], int size)
{
	for (int i = 0; i < SIZE; i++) {
		a[i] = a[i] * a[i];
	}
}