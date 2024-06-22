#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40 };
	int* p = a;
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

	p[0] = 50, p[1] = 60, p[2] = 70;
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n", p[0], p[1], p[2]);
}