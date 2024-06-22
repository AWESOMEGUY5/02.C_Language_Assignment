#include <stdio.h>

void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1,2,3 };
	int* p = a;

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	printf("%d %d %d\n", p[0], p[1], p[2]);

	return 0;
}
void sub(int *b, int n)
{
	for (int i = 0; i < n; i++) {
		b[i] = *(b + i) + 3;
	}
}