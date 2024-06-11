#include <stdio.h>

void sub()
{
	static int scount = 0;
	int account = 0;

	printf("scount = %d, account = %d\n", scount, account);
	scount++, account++;
}

int main(void)
{
	sub(), sub(), sub();

	return 0;
}