#include <stdio.h>

int A, B;
int add(A, B)
{
	return A + B;
}
int main(void)
{
	A = 5, B = 7;
	printf("%d + %d = %d ", A, B, add(A, B));
}