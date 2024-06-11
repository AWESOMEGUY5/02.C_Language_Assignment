#include <stdio.h>
int inc(int counter);

int main(void)
{
	int i = 10;
	printf("함수 호출 전 : i = %d\n", i);
	inc(i);
	printf("함수 호출 후 : i = %d\n", i);
}
int inc(int counter)
{
	return counter++;
}