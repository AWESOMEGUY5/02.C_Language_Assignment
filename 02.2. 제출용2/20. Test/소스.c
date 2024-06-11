#include <stdio.h>

int main(void)
{
	/*
	* int n = 1, s = 0;
	for (; n <= 10; n++)
		if (n % 4) continue;
		else s += n;
	printf("%d", n + s);

	*/

	int a[] = { 10, 20, 30 }, * p = a;
	(*p)++;
	printf("%d", *p);
}
