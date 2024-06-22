#include <stdio.h>

void print_reserve(const int a[], int n);

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	print_reserve(a, sizeof a / sizeof a[1]);
	return 0;
}
void print_reserve(const int a[], int n)
{
	const int* p = a + n - 1;
	while (p >= a) {
		printf("%d\n", *p--);
	}
}