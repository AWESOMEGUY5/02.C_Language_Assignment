#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p : %p\n", p);
	printf("*p : %d\n\n", *p);

	p = &y;
	printf("p : %p\n", p);
	printf("*p : %d", *p);
	return 0;
}