#include <stdio.h>

int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("pc: %u, pc + 1: %u, pc + 2: %u\n", (unsigned)pc, (unsigned)(pc + 1), (unsigned)(pc + 2));
	printf("pi: %u, pi + 1: %u, pi + 2: %u\n", (unsigned)pi, (unsigned)(pi + 1), (unsigned)(pi + 2));
	printf("pd: %u, pd + 1: %u, pd + 2: %u\n", (unsigned)pd, (unsigned)(pd + 1), (unsigned)(pd + 2));

	return 0;
}