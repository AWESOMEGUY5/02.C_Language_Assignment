#include <stdio.h>

int main(void)
{
	int char1;

	while ((char1 = getchar()) != EOF)
		putchar(char1);
}