#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };
	printf("a = %p\n", a);
	printf("a = %d\n\n", * a);

	printf("a + 1 = %p\n", a + 1);
	printf("a + 1 = %d\n", *(a + 1));
	
}